/*
Problem Link:
https://codeforces.com/problemset/problem/1972/B
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int cnt = 0;
        string s; cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i] == 'U')
            {
                cnt++;
            }
        }
        if(cnt%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

return 0;
}
