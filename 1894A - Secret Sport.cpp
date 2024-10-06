/*
Problem Link:
https://codeforces.com/contest/1894/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        string s;
        cin>>n;
        cin>>s;
        int l=s.length();
        for(int i=0;i<l;i++)
        {
            if(s[l-1]=='A')
            {
                c++;
            }
        }
        if(c>0)
        {
            cout<<"A"<<endl;;
        }
        else
        {
            cout<<"B"<<endl;
        }
    }
}
