/*
Problem Link:
https://codeforces.com/contest/155/problem/A
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, amzng = 0, min, max;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
        {
            min = a[i];
            max = a[i];
        }
        else
        {
            if (a[i] < min)
            {
                min = a[i];
                amzng++;
            }
            else if (a[i] > max)
            {
                max = a[i];
                amzng++;
            }
        }
    }
    cout << amzng << endl;
    return 0;
}
