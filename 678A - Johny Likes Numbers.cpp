/*
Problem Link:
https://codeforces.com/contest/678/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    cin >>a>>b;
    int rem=a%b;
    int total=a+(b-rem);
    cout<<total<<endl;
}
