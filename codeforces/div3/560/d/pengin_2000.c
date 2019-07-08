#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d", &t);
	int k, i, n, p, count;
	long long int d[302], x, j;
	for (k = 0; k < t; k++)
	{
		scanf("%d", &n);
		for (i = 0; i < n; i++)
			scanf("%lld", &d[i]);
		for (i = 0; i < n - 1; i++)
		{
			if (d[i] > d[i + 1])
			{
				x = d[i];
				d[i] = d[i + 1];
				d[i + 1] = x;
				if (i > 0)
					i -= 2;
			}
		}
		x = d[0] * d[n - 1];
		p = 0;
		for (i = 1; i <= n / 2; i++)
		{
			if (x != d[i] * d[n - i - 1])
			{
				p++;
				printf("-1\n");
				break;
			}
		}
		if (p > 0)
			continue;
		count = 0;
		for (j = 1; j <= sqrt(x); j++)
		{
			if (x % j == 0)
			{
				if (j * j < x)
					count += 2;
				else
					count++;
			}
		}
		count -= 2;
		if (n != count)
		{
			p++;
			printf("-1\n");
		}
		if (p > 0)
			continue;
		printf("%lld\n", x);
	}
	return 0;
}
