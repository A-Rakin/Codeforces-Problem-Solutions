/*
Problem Link:
https://codeforces.com/contest/703/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mishka,chris,m=0,c=0;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>mishka>>chris;
        if(mishka>chris)
        {
            m++;
        }
        else if(mishka<chris)
        {
            c++;
        }
        else
        {
            m++;
            c++;
        }
    }
    if(m>c)
    {
        cout<<"Mishka"<<endl;
    }
    else if(m<c)
    {
        cout<<"Chris"<<endl;
    }
    else
    {
        cout<<"Friendship is magic!^^"<<endl;
    }
} 

