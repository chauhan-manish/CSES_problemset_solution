#include<bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define ll long long
#define ld long double
#define pb push_back
#define FR first
#define SC second
#define MOD 1000000007
#define LLMN LLONG_MIN
#define LLMX LLONG_MAX
#define LDMX LDBL_MAX
#define LDMN LDBL_MIN
#define MAX 2000010
#define pll pair<ll, ll>
#define vl vector<ll>
#define vll vector< vl >
#define vb vector<bool>
#define vbb vector< vb >
#define vpl vector<pll>
#define vpll vector< vpl >

vl fact(MAX), ifact(MAX);
ll power(ll a, ll n)
{
	ll res = 1;
	while(n)
	{
		if(n % 2)
			res = (res * a) % MOD;
		n /= 2;
		a = (a * a) % MOD;
	}
	return res;
}

void getFact()
{
	fact[0] = 1;
	ifact[0] = 1;
	for(ll i = 1; i < MAX; i++)
	{
		fact[i] = (fact[i - 1] * i) % MOD;
		ifact[i] = (ifact[i - 1] * power(i, MOD - 2)) % MOD;
	}
}
void solve()
{
	ll n, m, k;
	cin>>n>>m;
	ll res = ((fact[m + n - 1] * ifact[m]) % MOD * ifact[n - 1]) % MOD;
	cout<<res<<"\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t = 1;
	getFact();
	//cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
