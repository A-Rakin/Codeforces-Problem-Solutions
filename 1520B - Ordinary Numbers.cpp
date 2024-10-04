/*
Problem Link:
https://codeforces.com/contest/1520/problem/B
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,j,c=0;
        cin>>n;
        for(i=1;i<=n;i=i*10+1)
        {
            for(j=1;j<=10-1;j++)
            {
               if(i*j<=n)
               {
                  c++;
               }
            }
        }
        cout<<c<<endl;
    }
}
