/*SUMMARY
long long ints  t,n,x,i,j,a[n]
int f
f is init to 0
*/


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
    
    //long long ints
    ll t,n,x,i,j;
    //int f
    int f;
    cin>>t;
    while(t){
      t--;
      cin>>n;
      ll a[n];
      // f has been init to zero. what is f used for
      f=0;
      for(i=0;i<n;i++){
        cin>>a[i];
      }
        
      
      sort(a,a+n);
      x=a[0]*a[n-1];
      // what is j used for
      j=0;
        
        //i*i<=x which means  for all ints less than the sqrt(result)
      for(i=2;i*i<=x;i++){
        if(x%i==0){
          if(a[j]!=i || a[n-1-j]!=(x/i)){
            f=1;
            break;
          }
          j++;
        }
      }
      
      //how the fuck does this statement matter
        //this matters cos the above loop only checks if all the nos that are divisors are present
        //the above loop makes sure that all present are divisors by counting the divisors found above and divisors that are given in problem
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
