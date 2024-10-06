/*
Problem Link:
https://codeforces.com/contest/1560/problem/B
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,absolute;
        cin>>a>>b>>c;
        absolute=abs(b-a);
        if(a>2*absolute||b>2*absolute||c>2*absolute)
        {
            cout<<-1<<endl;
        }
        else if(c>absolute)
        {
            cout<<c-absolute<<endl;
        }
        else
        {
            cout<<c+absolute<<endl;
        }
    }
}
