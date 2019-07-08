#include <stdio.h>
#include <string.h>
 
#define A	1000000
 
int main() {
	int t;
 
	scanf("%d", &t);
	while (t--) {
		static char used[A + 1];
		int n, min, max, a;
		long long x;
 
		scanf("%d", &n);
		memset(used, 0, sizeof used);
		min = A + 1, max = 0;
		while (n--) {
			scanf("%d", &a);
			used[a] = 1;
			if (min > a)
				min = a;
			if (max < a)
				max = a;
		}
		x = (long long) min * max;
		for (a = 2; a <= A && a < x; a++)
			if ((x % a == 0) != used[a]) {
				x = -1;
				break;
			}
		printf("%lld\n", x);
	}
	return 0;
}
