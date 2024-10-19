/*
Problem Link:
https://codeforces.com/contest/1467/problem/A
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<9;
        for(ll i=2;i<=n;i++)
        {
           ll r=(i+6)%10;
           cout<<r;
        }
        cout<<endl;
    }
}
