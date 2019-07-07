#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
const ll mx=200005;
using namespace std;
vector <int> a[mx];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    ll t,n,x,i,j;
    int f;
    cin>>t;
    while(t){
      t--;
      cin>>n;
      ll a[n];
      f=0;
      for(i=0;i<n;i++){
        cin>>a[i];
      }
      sort(a,a+n);
      x=a[0]*a[n-1];
      j=0;
      for(i=2;i*i<=x;i++){
        if(x%i==0){
          if(a[j]!=i || a[n-1-j]!=(x/i)){
            f=1;
            break;
          }
          j++;
        }
      }
      if(j!=((n+1)/2))
        f=1;
      if(f==1){
        cout<<"-1"<<endl;
      }
      else
        cout<<x<<endl;
    }
    return 0;
}
