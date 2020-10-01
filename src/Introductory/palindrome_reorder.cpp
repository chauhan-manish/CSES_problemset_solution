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
	string s;
	cin>>s;
	ll n = s.size(), count = 0;
	vl freq(26, 0);
	for(auto i : s)
		freq[i - 65]++;
	for(ll i = 0; i < 26; i++)
	{
		if(freq[i] % 2)
			count++;
		if(count > 1)
		{
			cout<<"NO SOLUTION";
			return;
		}
	}
	ll k = 0;
	for(ll i = 0; i < 26; i++)
	{
		if(freq[i] % 2)
		{
			s[n / 2] = char(i + 65);
			freq[i]--;
		}
		for(ll j = 0; j < freq[i] / 2; j++)
		{
			s[k] = char(i + 65);
			s[n - 1 - k] = char(i + 65);
			k++;
		}
	}
	cout<<s;
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
