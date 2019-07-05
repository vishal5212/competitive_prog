#include <bits/stdc++.h>
 
using namespace std;
 
#define i64 long long int
#define mp make_pair
#define pb push_back
#define MAX 300005
#define INF 1000000007
 
vector < pair <i64, int> > a;
//vector of type pair and pair of 64-bit int and  a normal int
int maxv[MAX], minv[MAX];
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n; cin >> n;
	int zero = 0;
	for (int i = 1; i <= n; i++) {
		//i64 seems to be some datatype. thsi is all i've been able to find out 
		//https://stackoverflow.com/questions/25692848/error-invalid-suffix-i64-on-integer-constant
		//you fucking idiot it has already been defined at the top
		i64 x; cin >> x;
		if (x == 0) zero++;
		
		//push elements as pairs of the element with the corresponding index
		a.pb(mp(x, i));
	}
	i64 resK = INF;//you see how easy it is to define inf in c++
	if (zero == 0) {
		
		//sorts the list but for what
		sort(a.begin(), a.end());
		
		
		//just initializing the maxv and minv that's why they are them same
		maxv[n - 1] = a[n - 1].second;//index of the max or min elemnt
		minv[n - 1] = a[n - 1].second;
		
		//maxv and minv are arrays of size n-1 and starting from end the max and min index of every parir is stored
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
