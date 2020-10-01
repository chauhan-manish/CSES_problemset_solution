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
#define MAX 1000000
#define pll pair<ll, ll>
#define vl vector<ll>
#define vll vector< vl >
#define vb vector<bool>
#define vbb vector< vb >
#define vpl vector<pll>
#define vpll vector< vpl >

void solve()
{
	ll n, sum = 0;
	cin>>n;
	vl a(n);
	for(ll i = 0; i < n; i++){
		cin>>a[i];
		sum += a[i];
	}
	ll x = pow(2, n), mn = LLMX;
	for(ll i = 0; i < x; i++)
	{
		ll temp = 0;
		for(ll j = 0; j < n; j++)
		{
			if(i & (1 << j))
				temp += a[j];
		}
		mn = min(mn, abs(temp - (sum - temp)));
	}
	cout<<mn;
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
