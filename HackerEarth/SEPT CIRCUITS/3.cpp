/******************************************
*    AUTHOR         :   VIVEK SHAH        *
*    INSTITUTION    :   NIT SURAT         *
******************************************/

#include <bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define rep(i,a,b) for (ll i = a; i<b; ++i)

using namespace std;

int main()
{
	boost;
	ll x;
	cin>>x;
	ll a[x];
	ll t_fac_num=1;
	
	rep(i,0,x){
		cin>>a[i];
		t_fac_num *= (a[i]+1);
	}

	ll ans = 1;
	ll p;
	for (ll i = 0; i <x ; ++i){
		p=a[i];
		ans = ((ans%m) * (((t_fac_num*p)/2)+1))%m;
	}
	cout<<ans<<"\n";
	return 0;
}