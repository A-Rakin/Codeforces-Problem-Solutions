/*
Problem Link:
https://codeforces.com/contest/1624/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>vec(n);
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        sort(vec.begin(),vec.end());
        cout<<vec[n-1]-vec[0]<<endl;
    }
} 
