/*
Problem Link:
https://codeforces.com/contest/1760/problem/B
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l;
        cin>>l;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        cout<<s[l-1]-96<<endl;
    }
return 0;
}
 
