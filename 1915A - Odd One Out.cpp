/*
Problem Link:
https://codeforces.com/contest/1915/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b)
        {
            cout<<c<<endl;
        }
        else if(a==c)
        {
            cout<<b<<endl;
        }
        if(b==c)
        {
            cout<<a<<endl;
        }
    }
}
