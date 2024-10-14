/*
Problem Link
https://codeforces.com/contest/1925/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,c=0;
        cin>>n>>k;
        char ch='a';
        for(int i=0;i<n*k;i++)
        {
            cout<<ch;
            ch++;
            c++;

       if(k<=c)
       {
           c=0;
           ch='a';
       }
    }
       cout<<endl;
    }
}
