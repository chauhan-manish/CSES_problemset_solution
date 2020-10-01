#include<bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
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
#define MAX 1000010
#define pll pair<ll, ll>
#define vl vector<ll>
#define vll vector< vl >
#define vb vector<bool>
#define vbb vector< vb >
#define vpl vector<pll>
#define vpll vector< vpl >

ll fastpower(ll a, ll n)
{
	ll res = 1;
	while(n > 0)
	{
		if(n % 2 != 0)
		{
			res = (res * a) % MOD;
		}
		n /= 2;
		a = (a * a) % MOD;
	}
	return res;
}
void getfact(vector<ll> &fact, vector<ll> &ifact)
{
	fact[0] = 1;
	ifact[0] = 1;
	
	for(ll i = 1; i < MAX; i++)
	{
		fact[i] = (fact[i - 1] * i) % MOD;
		ifact[i] = (ifact[i - 1] * fastpower(i, MOD -2) ) % MOD;
	}
}

void solve()
{
	vl fact(MAX), ifact(MAX);
	getfact(fact, ifact);
	string s;
	cin>>s;
	vl freq(26, 0);
	for(auto i : s)
		freq[i - 97]++;
	ll n = s.size();
	ll res = fact[n];
	for(ll i = 0; i < 26; i++)
	{
		res = (res * ifact[freq[i]]) % MOD;
	}
	cout<<res;
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
