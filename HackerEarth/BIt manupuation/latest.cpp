#include <bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for (ll i = a; i <b ; ++i)

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin>>t;

	while(t--){
		ll n,count=0;
		cin>>n;
		ll s=0;
		for (ll i = 2; i <n ; i*=2)
			for (ll j = 1; (i+j)<=n ; j*=2)
				s = (s%m)+(i+j)%m;	
		cout<<s%m<<"\n";
	}
	return 0;
}

