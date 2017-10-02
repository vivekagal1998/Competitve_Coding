#include <bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for (ll i = a; i<b; ++i)

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		ll a[32]={0},b[32]={0};
		ll i=0,j=0;
		while(n){
			a[i++] = n%2;
			n/=2;
		}
		while(m){
			b[j++] = m%2;
			m/=2;
		}
		ll c=0;
		for (ll k = 0; k <(max(i,j)) ; ++k){
			if (a[k]!=b[k])
			{
				c++;
			}
		}
		cout<<c<<"\n";
	}
	return 0;
}