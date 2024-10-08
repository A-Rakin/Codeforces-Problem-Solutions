/*
Problem Link:
https://codeforces.com/contest/746/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i,j,k;
    cin>>a>>b>>c;
    i=a;
    if(a==b*2 && b==c*4)
    {
        cout<<a+b+c<<endl;
    }
    else
    {
        while(i>0)
        {
            j=i*2;
            k=j*2;
            if(j>b || k>c)
            {
                i=i-1;
                j=j-2;
                k=k-4;
            }
            else
            {
                break;
            }
        }
        cout<<i+j+k<<endl;
    }

}
