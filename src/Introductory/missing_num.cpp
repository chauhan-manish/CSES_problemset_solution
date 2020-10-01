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

void solve()
{
	ll n, sum = 0;
	cin>>n;
	vl a(n);
	for(ll i = 0; i< n - 1; i++)
	{
		cin>>a[i];
		sum += a[i];
	}
	ll miss = (n * (n + 1)) / 2 - sum;
	cout<<miss;
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
