/*
Problem Link:
https://codeforces.com/contest/1328/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,rem;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        rem=a%b;
        if(rem==0)
        {
            cout<<0<<endl;
        }
       else
       {
           cout<<b-rem<<endl;
       }
    }
    return 0;
}
