#include <bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define rep(i,a,b) for (ll i = a; i<b; ++i)

using namespace std;

int main()
{
	boost;
	ll n,m;
	cin>>n>>m;
	ll a[n][m];
	rep(i,0,n)rep(j,0,m)cin>>a[i][j];
	ll c0=0,c1=0;
	rep(i,0,n)
		for(ll j=0;j<=i;j++)
			for (ll k = 0; k <=i ; ++i)
				if(a[k][j]==0)c0++;
				else c1++;

	return 0;
}
