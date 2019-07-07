/* LittleFall : Hello! */
#include <bits/stdc++.h>
using namespace std; using ll = long long; inline int read();
const int M = 512, MOD = 1000000007;
 
//求n的因数个数
int resolve(ll n)
{
	int res = 0;
	for(ll i=1; i*i<=n; ++i)
	{
		if(n%i==0)
		{
			if(i*i==n) res+=1;
			else res+=2;
		}
	}
	return res;
}
 
int save[M];
int main(void)
{
	#ifdef _LITTLEFALL_
	freopen("in.txt","r",stdin);
    #endif
 
	int t = read();
	while(t--)
	{
		int n = read();
		for(int i=1; i<=n; ++i)
			save[i] = read();
		sort(save+1, save+n+1);
 
		ll res = 1ll*save[1]*save[n];
		int suc = 1;
 
		for(int i=1; i<=n; ++i)
		{
			if(res%save[i])
			{
				suc = 0;
				break;
			}
		}
 
		if(suc)
		{
			if(resolve(res)!=n+2)
				suc = 0;
		}
 
		if(suc)
		{
			cout << res << endl;
		}
		else
		{
			cout << -1 << endl;
		}
 
	}
 
    return 0;
}
 
 
inline int read(){
    int x=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9') {if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
    return x*f;
}
