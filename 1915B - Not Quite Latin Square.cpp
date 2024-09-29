/*
Problem Link:
https://codeforces.com/contest/1915/problem/B
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
   cin>>t;
    while(t--)
    {
        char a[9];
        int Al=0,Bl=0,Cl=0;
        for(int i=0;i<9;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<9;i++)
        {
           if(a[i]=='A')
           {
               Al++;
           }
           else if(a[i]=='B')
           {
               Bl++;
           }
           else if(a[i]=='C')
           {
               Cl++;
           }
        }
        if(Al<Bl&&Al<Cl)
        {
            cout<<"A"<<endl;
        }
        else if(Bl<Al&&Bl<Cl)
        {
            cout<<"B"<<endl;
        }
        else
        {
            cout<<"C"<<endl;
        }
    }
}
