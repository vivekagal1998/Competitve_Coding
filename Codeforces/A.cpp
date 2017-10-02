#include <bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for (ll i = a; i<b; ++i)

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,k,t;
	cin>>n>>k>>t;
	if (t<=k)
	{
		cout<<t<<"\n";
	}
	else if (t>k && t<=n)
	{
		cout<<k<<"\n";
	}
	else{
		cout<<(n+k)-t<<"\n";
	}
	return 0;
}