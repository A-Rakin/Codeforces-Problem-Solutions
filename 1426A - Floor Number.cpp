/*
Problem Link:
https://codeforces.com/contest/1426/problem/A
*/
#import<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,x;
    cin>>t;
	while(t--)
	{
		cin>>n>>x;
		if(n<3)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<((n-3)/x+2)<<endl;
        }
	}
}
