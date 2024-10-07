/*
Problem Link:
https://codeforces.com/contest/1669/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        if(n<=1399)
        {
            cout<<"Division 4"<<endl;
        }
        else if(n<=1599)
        {
           cout<<"Division 3"<<endl;
        }
        else if(n<=1899)
        {
            cout<<"Division 2"<<endl;
        }
        else if(n>=1900)
        {
            cout<<"Division 1"<<endl;
        }
    }
}
