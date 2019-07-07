#include <bits/stdc++.h>
 
using namespace std;
 
bool isPrime(int num) {
    if(num < 2) {
        return false;
    } else if(num == 2) {
        return true;
    } else if(num % 2 == 0) {
        return false;
    }
    for(int i = 3, m = sqrt(num); i <= m; i += 2) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}
 
int64_t f(set<int>& s)
{
  int64_t g,d,r=1,m,e;
  set<int> mis;
 
 
  for(int a : s)
  {
    g=__gcd(r,(int64_t)a);
    d=a/g;
    if(d==1)
      continue;
    r*=d;
    if(r>1e12)
      return -1;
    if(s.find(d)==s.end())
      mis.insert(d);
    if(s.find(r)==s.end())
      mis.insert(r);
  }
 
  if(mis.size()>2)
    return -1;
 
  // add a small prime divisor
  if(mis.size()==0)
  {
    //min of s * r
    m=*(s.begin());
    mis.insert(m);
    r*=m;
  }
 
  // check divisors of r
  d=1;
  m=r;
  for(int a : s)
  {
    if(!isPrime(a))
      continue;
    e=0;
    while((m%a)==0)
    {
      m/=a;
      e++;
    }
    d*=(e+1);
  }
  if(m!=1)
    return -1;
  /* too slow
  for(i=2, d=0, m=r-1; i<=m; i++)
  {
    if((r%i)==0)
    {
      d++;
      if(m==r)
        m=r/i;
    }
  }
  */
 
  //cout<<"dbg r:"<<r<<" d:"<<d<<" s.size:"<<s.size()<<endl;
  // more than 1 and r missing divisors in s
  if(s.size()!=(d-2) or s.find(r)!=s.end())
    return -1;
 
  return r;
}
 
 
int main()
{
  int i,j,t,k,n;
  set<int> s;
 
  cin>>t;
  for(j=0;j<t;j++)
  {
    cin>>n;
    s.clear();
    for(i=0;i<n;i++)
    {
      cin>>k;
      s.insert(k);
    }
    cout<<f(s)<<endl;
  }
 
  return 0;
}
