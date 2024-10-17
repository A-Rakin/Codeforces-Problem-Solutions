/*
Problem Link:
https://codeforces.com/contest/1146/problem/A
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    size_t cnt = count(s.begin(), s.end(), 'a');
    cout << min(2 * cnt - 1, s.length());
}
