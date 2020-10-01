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
	ll n;
	cin>>n;
	ll sum = (n * (n + 1)) / 2;
	if(sum % 2)
		cout<<"NO";
	else
	{
		ll a = n, b = 1;
		sum /= 2;
		vector<ll> first, second;
		
		while(sum > 0)
		{
			sum -= a;
			first.pb(a);
			a--;
			if(sum > 0)
			{
				sum -= b;
				first.pb(b);
				b++;
			}
		}
		sort(all(first));
		cout<<"YES\n"<<first.size()<<'\n';
		for(auto it : first)
			cout<<it<<" ";
		cout<<"\n"<<n - first.size()<<'\n';
		for(ll i = 1; i <= n; i++)
			if(!binary_search(all(first), i))
				cout<<i<<" ";
	}
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
