/*
Problem Link:
https://codeforces.com/contest/1554/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;

        vector<int>a(n);

        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        long long ans = 0;

        for (int i = 1; i < n; i++)
        {
            ans=max(ans, 1LL * a[i] * a[i - 1]);
        }
        cout << ans <<endl;
    }
    return 0;
}
