/*
https://codeforces.com/problemset/problem/2020/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		int n,k;cin>>n>>k;
		if(k==1)
		{
			cout<<n<<"\n";
			continue;
		}
		int count=0;
		while(n>0)
		{
			count+=n%k;n/=k;
		}
		cout<<count<<"\n";
	}
}
