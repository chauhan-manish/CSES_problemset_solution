#include<bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define YES() printf("YES\n")
#define NO() printf("NO\n")
#define Yes() printf("Yes\n")
#define No() printf("No\n")
#define ll long long
#define ld long double
#define pb push_back
#define FR first
#define SC second
#define MOD 1000000007
#define LLMN LONG_LONG_MIN
#define LLMX LONG_LONG_MAX
#define LDMX LDBL_MAX
#define LDMN LDBL_MIN
#define MAX 1000000
#define pll pair<ll, ll>
#define vl vector<ll>
#define vll vector< vector<ll> >
#define vb vector<bool>
#define vbb vector< vector<bool> >

ll fastpower(ll a, ll n)
{
	ll res = 1;
	while(n > 0)
	{
		if(n % 2)
			res = (res * a) % MOD;
		n /= 2;
		a = (a * a) % MOD;
	}
	return res;
}
void solve()
{
	ll n;
	cin>>n;
	cout<<fastpower(2, n);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t = 1;
	//cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
