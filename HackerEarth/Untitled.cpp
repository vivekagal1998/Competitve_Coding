//Author: Vivek Shah

#include <bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define rep(i,a,b) for (ll i = a; i<b; ++i)

using namespace std;

ll m=1e9+7;

ll inverse1(ll a,ll b,ll m){
	ll res = 1;
	while(b){
		if (b%2)
		{
			res = (res*a)%m;
		}
		a = (a*a)%m;
		b/=2;
	}
	return res;
}

ll inverse(ll a,ll m){
	return inverse1(a,m-2,m);
}

int main()
{
	boost;
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[n];
		rep(i,0,n)cin>>a[i];
		ll maxx=0;
		for (ll i = 0; i <(1<<n); ++i){
			ll p = 0,p_inv=0;
			for (ll j= 0; j <n ; ++j){
				if (i&(1<<j))
				{
					p = (p* a[j])%m;
					p_inv = inverse(p_inv + a[j],m);
					p = (p*p_inv)%m;
				}
			}
			if (p>maxx)
			{
				max = p;
			}
		}
		cout<<max<<"\n";	
	}
	return 0;
}