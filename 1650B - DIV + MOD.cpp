/*
Problem Link:
https://codeforces.com/problemset/problem/1872/B
*/
/*
 ===================================================================================
 ||                                                                               ||
 ||             International University of Business Agriculture                  ||
 ||                    and Technology, Dhaka, Bangladesh                          ||
 ||                           Abrar Rakin                                         ||
 ||                           Batch -2230                                         ||
 ||                                                                               ||
 ===================================================================================
*/
#include <bits/stdc++.h>
using namespace std;
//---------------------------typedef----------------------------//
typedef long long           ll;
typedef unsigned long long ull;
typedef long double         ld;
typedef vector<int>        veci;
typedef vector<ll>        vecl;
typedef vector<bool>      vecb;
typedef vector<string>    vecs;
typedef pair<int,int>      pii;
typedef pair<ll,ll>        pll;
typedef pair<string,int>   psi;
typedef pair<string,int>   psl;
typedef map<int,int>      mpii;
typedef map<ll,ll>        mpll;
typedef map<string,int>   mpsi;
typedef map<string,ll>    mpsl;

//----------------------------Define---------------------------//
#define ll long long
#define fst_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define spc " "
#define nl endl
#define LOOP for(long long i=0;i<n;i++)
#define LOOPJ for(int j=0;j<n;j++)
#define RLOOP for(int i=n-1;i>=0;i--)
#define Y cout<<"YES"<<endl
#define N cout<<"NO"<<endl
#define mn cout<<-1<<endl
#define P cout
#define svec sort(vec.begin(),vec.end())
#define TC while(t--)
//---------------------------User Defined Function-----------------------//
ll gcd(ll a,ll b)                 // GCD
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}
void findDivisor (int n)        //Find Divisor
{
	vecl vec;
    for(ll i=1; i*i<=n; i++)
    {
    	if(n%i == 0)
    	{
    		if(n/i==i)
    		{
    			vec.push_back(i);
    		}
    		else
    		{
    			vec.push_back(i);
    			vec.push_back(n/i);
    		}
    	}
    }
}
void primeSieve(int n)           //Sieve of Eratosthenes
{
    int prime[100]={0};
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
//---------------------------Solve Function-----------------------//
void solve()
{
    ll l, r, x;cin>>l>>r>>x;
    ll a = r/x + r%x;
    ll m = r/x * x-1;
    if(m>=l)a = max(a, m/x + m%x);
    P<<a<<nl;
}
//---------------------------Main Code-----------------------//
int main()
{
	fst_io;
	ll t;
	cin>>t;
	TC
	{
		solve();
	}
return 0;
}


