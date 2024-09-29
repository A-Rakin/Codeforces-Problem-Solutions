/*
Problem Link:
https://codeforces.com/contest/1915/problem/C
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      long long n,sum=0,c=0;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
      }
      for(int i=0;i<n;i++)
      {
          sum=sum+a[i];
      }
     double root;
     root=sqrt(sum);
     if((long long)root==root)
     {
         cout<<"YES"<<endl;
     }
     else
     {
         cout<<"NO"<<endl;
     }
    }
    return 0;
}
