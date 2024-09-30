/*
Problem Link:
https://codeforces.com/contest/1551/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  long long n,r,rem,res,c1,c2,re;
  for(int i=1;i<=t;i++)
  {
      cin>>n;
      re=n%3;
      if(re==2)
      {
        long long r=n/3;
        rem=n-r;
        res=rem/2;
        c2=res;
        cout<<r<<" "<<res<<endl;
      }
      else if(re==0)
      {
          long long r=n/3;
          cout<<r<<" "<<r<<endl;
      }
      else if(re==1)
      {
          long long r=n/3;
          cout<<r+1<<" "<<r<<endl;
      }
  }
}

