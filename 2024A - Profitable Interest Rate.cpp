/*
Problem Link:
https://codeforces.com/contest/2024/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<max(0,min(a,2*a-b))<<endl;
    }
}
