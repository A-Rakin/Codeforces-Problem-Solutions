/*
Problem Link:
https://codeforces.com/contest/1220/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,zero=0,one=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='n')
        {
            one++;
            //cout<<one<<endl;
        }
        else if(s[i]=='z')
        {
            zero++;
            //cout<<zero<<endl;
        }
    }
    for(int i=0;i<one;i++)
    {
        cout<<1<<" ";
    }
    for(int i=0;i<zero;i++)
    {
        cout<<0<<" ";
    }
}
