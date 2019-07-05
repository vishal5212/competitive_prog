#include <bits/stdc++.h>
 
using namespace std;
 
#define i64 long long int
#define mp make_pair
#define pb push_back
#define MAX 300005
#define INF 1000000007
 
vector < pair <i64, int> > a;
int maxv[MAX], minv[MAX];
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n; cin >> n;
	int zero = 0;
	for (int i = 1; i <= n; i++) {
		i64 x; cin >> x;
		if (x == 0) zero++;
		a.pb(mp(x, i));
	}
	i64 resK = INF;
	if (zero == 0) {
		sort(a.begin(), a.end());
		maxv[n - 1] = a[n - 1].second;
		minv[n - 1] = a[n - 1].second;
		for (int i = n - 2; i >= 0; i--) {
			maxv[i] = max(a[i].second, maxv[i + 1]);
			minv[i] = min(a[i].second, minv[i + 1]);
		}
		for (int i = 0; i < n - 1; i++) {
			i64 minValue = a[i].first;
			int deltaI = max(abs(a[i].second - maxv[i + 1]), abs(a[i].second - minv[i + 1]));
			i64 k = (minValue) / deltaI;
			resK = min(resK, k);
		}
	} else {
		resK = 0;
	}
	cout << resK << "\n";
	return 0;
}
