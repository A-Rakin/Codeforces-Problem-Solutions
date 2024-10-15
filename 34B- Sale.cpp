/*
Problem Link:
https://codeforces.com/contest/34/problem/B
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,m,sum=0;
     cin>>n>>m;
     vector<int>vec(n);
     for(int i=0;i<n;i++)
     {
          cin>>vec[i];
     }
     sort(vec.begin(),vec.end());
     for(int i=0;i<m;i++)
     {
          if(vec[i]<0)
          {
               sum=sum-vec[i];
          }
     }
     cout<<sum<<endl;
}
