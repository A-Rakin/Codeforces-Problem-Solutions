/*
Problem Link:
https://codeforces.com/contest/1873/problem/A
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       string s;
       int c=0;
       cin>>s;
       for(int i=0;i<3;i++)
       {
           if(s[0]=='b'&&s[1]=='a'||s[1]=='c'&&s[2]=='b'||s[0]=='a'&&s[1]=='c'||s[1]=='b'&&s[2]=='c'||s[0]=='a'&&s[1]=='b'||s[0]=='c'&&s[1]=='b')
           {
               c++;
           }
       }
       if(c>0)
       {
           cout<<"Yes"<<endl;
       }
       else
       {
           cout<<"No"<<endl;
       }

    }

    return 0;
}
