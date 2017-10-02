#include <bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define rep(i,a,b) for (ll i = a; i<b; ++i)

using namespace std;

int main()
{
	boost;
	ll t;
	cin>>n;
	ll a[n+1],c=0;
	rep(i,1,n+1){
		cin>>a[i];
		if(!a[i])c++;
	}
	ll dp[n+1];

	rep(i,1,n)
		dp[i] = dp[i-1]^a[i];

	ll q;
	cin>>q;
	while(q--){
		ll l,r;
		cin>>l>>r;
		cout<<dp[r]^dp[l-1]<<" "<<c<<"\n";
	}	

	return 0;
}