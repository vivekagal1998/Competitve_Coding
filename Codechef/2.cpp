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
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		for (ll i = 1; i <=n ; ++i){
			cout<<2*i<<" ";
		}	
		cout<<"\n";
	}
	return 0;
}