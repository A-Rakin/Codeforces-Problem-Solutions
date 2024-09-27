/*
Problem Link:
https://codeforces.com/contest/1703/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            s[i]=tolower(s[i]);
        }
        string b="yes";
        if(s==b)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
