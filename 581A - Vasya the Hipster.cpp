/*
Problem Link:
https://codeforces.com/contest/581/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,rem,d,r,t;
    cin>>x>>y;
    if(x>=y)
    {
        rem=x-y;
         d=rem/2;
        cout<<y<<" "<<d<<endl;
    }
    else
    {
        r=y-x;
        t=r/2;
        cout<<x<<" "<<t<<endl;
    }
return 0;
}
