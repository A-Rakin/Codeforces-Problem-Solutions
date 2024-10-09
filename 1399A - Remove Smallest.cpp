/*
Problem Link:
https://codeforces.com/contest/1399/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,c,d;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        c=0;
        for(i=1;i<n;i++)
        {
            d=a[i]-a[i-1];
            if(d>1)
                c++;
        }
        if(c==0)
            cout<<"YES"<<endl;
        else if(c>0)
            cout<<"NO"<<endl;
    }
}
