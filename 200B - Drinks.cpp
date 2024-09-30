/*
Problem Link:
https://codeforces.com/contest/200/problem/B
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     double sum=0,total;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     {
          cin>>a[i];
     }
     for(int i=0;i<n;i++)
     {
       sum+=a[i];
     }
     total=sum/n;
     cout<<total<<endl;
     return 0;
}



