/*
Problem Link:
https://codeforces.com/contest/472/problem/A
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        int rem=n-4;
        cout<<4<<" "<<rem<<endl;
    }
    else
    {
        int rem=n-9;
        cout<<9<<" "<<rem<<endl;
    }
return 0;
} 
