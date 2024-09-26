/*
Problem Link:
https://codeforces.com/contest/1371/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,rem;
        cin>>n;
        rem=n/2;
        if(n%2==0)
        {
            cout<<rem<<endl;
        }
        else
        {
            cout<<rem+1 <<endl;
        }
    }
}
