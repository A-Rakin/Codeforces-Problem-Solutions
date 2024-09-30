/*
Problem Link:
https://codeforces.com/contest/467/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,c=0,a,b;
     cin>>t;
     for(int i=1;i<=t;i++)
     {
          cin>>a>>b;
          int rem=b-a;
          if(rem>=2)
          {
               c++;
          }
     }
     cout<<c<<endl;
     return 0;
}


