/*
Problem Link:
https://codeforces.com/contest/785/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,total_faces=0;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        string poly;
        cin>>poly;

    if(poly=="Tetrahedron")
        total_faces=total_faces+4;

    else if(poly=="Cube")
        total_faces=total_faces+6;

    else if(poly=="Octahedron")
        total_faces=total_faces+8;

    else if(poly=="Dodecahedron")
        total_faces=total_faces+12;

    else if(poly=="Icosahedron")
        total_faces=total_faces+20;
    }
    cout<<total_faces<<endl;
}
