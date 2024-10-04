/*
Problem Link:
https://codeforces.com/contest/1537/problem/A
*/
#include<iostream>
using namespace std;
int main()
{
	int t,n,arr[1000],sum;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sum=0;
		for(int i=0;i<n;i++)
		{
			sum=sum+arr[i];
		}
		 if(sum>=n)
		{
			cout<<sum-n<<endl;
		}
		else if(sum<n)
		{
			cout<<1<<endl;
		}
	}
}
