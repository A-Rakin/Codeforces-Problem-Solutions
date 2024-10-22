/*
Problem Link:
https://codeforces.com/contest/439/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k;cin>>t>>k;
    int a[t],su=0;
    for(int i=0; i<t; i++)
    {
        cin>>a[i];
        su=su+a[i];
    }
    su=su+((t-1)*10);
    if(su>k)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        int re=k-(su-(t-1)*10);
        re=re/5;
        cout<<re<<endl;
    }
}

