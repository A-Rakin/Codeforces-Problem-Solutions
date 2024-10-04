/*
Problem Link:
https://codeforces.com/contest/1560/problem/A
*/
#include<iostream>
using namespace std;
int main()
{
    int k,t;
    cin>>t;
        for(int i=1; i<=t; i++)
        {
            cin>>k;
            int cnt=0;
            for(int i=1; i<=2000; i++)
            {
                if(i%3!=0 and i%10!=3)
                {
                    cnt++;
                }
                if(k==cnt)
                {

                    cout<<i<<endl;
                    break;
                }
            }
        }
}
 
