/*
Problem Link:
https://codeforces.com/contest/1907/problem/A
*/
#include <bits/stdc++.h>
using namespace std;
void rook(int t, vector<string> positions)
{
    for (int i= 0; i < t; i++)
    {
        string pos = positions[i];
        char co =pos[0];
        int ro= pos[1] - '0';

        for (int i=1; i <= 8;i++)
        {
            if (i!=ro)
            {
                cout<<co<<i<<endl;
            }
        }


        for (char cha ='a';cha <='h';cha++)
        {
            if (cha!= co)
            {
                cout<<cha<<ro<<endl;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    vector<string> position(t);
    for (int i = 0; i < t; ++i)
    {
        cin >> position[i];
    }
    rook(t, position);
    return 0;
}
 
