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

vl factor(MAX, 1);
void solve()
{
	ll n, m, k;
	cin>>n;
	cout<<factor[n]<<"\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t = 1;
	cin>>t;
	for(ll i = 2; i < MAX; i++)
	{
		for(ll j = i; j < MAX; j += i)
			factor[j]++;
	}
	while(t--)
	{
		solve();
	}
	return 0;
}
