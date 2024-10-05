/*
Problem Link:
https://codeforces.com/contest/1529/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int p=0;
         cin>>n;
        vector<int>vec(n);
       for(int i=0;i<n;i++)
       {
           cin>>vec[i];
       }
       sort(vec.begin(),vec.end());
       for(int i=0;i<n;i++)
       {
            if(vec[0]<vec[i])
           {
               p++;
           }
       }
           cout<<p<<endl;
    }
}
