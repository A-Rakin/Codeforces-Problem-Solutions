/*
Problem Link:
https://codeforces.com/contest/1520/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string tasks;
        cin>>tasks;
        bool completed[26] = {false};
        char last_task = tasks[0];
        completed[last_task-'A']=true;
        bool suspicious = false;
        for(int i=1;i<n;i++)
        {
            if(tasks[i]!=last_task)
            {
                if (completed[tasks[i]-'A'])
                {
                    suspicious=true;
                    break;
                }
                completed[tasks[i]-'A']=true;
            }
            last_task=tasks[i];
        }
        if (!suspicious)
        {
            cout <<"YES"<< endl;
        }
        else
        {
            cout <<"NO"<< endl;
        }
    }
}
