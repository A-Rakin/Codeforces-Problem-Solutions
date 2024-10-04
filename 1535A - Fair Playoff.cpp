/*
Problem Link:
https://codeforces.com/contest/1535/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,s1,s2,s3,s4;
    cin>>t;
    for(int i=0;i<t;i++)
    {
       cin>>s1>>s2>>s3>>s4;
       int d=max(s1,s2);
       int r=min(s1,s2);
       int s=max(s3,s4);
       int k=min(s3,s4);
       if(d>k)
       {
           if(s>r)
           {
               cout<<"Yes"<<endl;
           }
       }
       if(d>k)
       {
           if(s<r)
           {
               cout<<"No"<<endl;
           }
       }
       if(d<k)
       {
           if(s>r)
           {
               cout<<"No"<<endl;
           }
       }
    }
}
