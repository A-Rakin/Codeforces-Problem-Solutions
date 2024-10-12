/*
Problem Link:
https://codeforces.com/contest/1878/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
     int n,k,c=0;
     cin>>n>>k;
     for(int i=0;i<n;i++)
     {
         int a;
         cin>>a;
         if(a==k)
         {
             c++;
         }
     }
     if(c!=0)
     {
         cout<<"YES"<<endl;
     }
     else
     {
       cout<<"NO"<<endl;;
     }
  }
  return 0;
}
