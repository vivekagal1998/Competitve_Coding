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
		string str;
		cin>>str;
		int check = (str=="Even")?0:1;
		ll n;
		cin>>n;
		ll b[n];
		rep(i,0,n)cin>>b[i];
		ll maxx=0;
		for (ll k = 1; k < (1<<n); ++k){
			std::vector<ll> v;
			for (ll j = 0; j <n ; ++j){
				if (k&(1<<j))
				{
					//a[j] = b[j];
					v.push_back(b[j]);
				}
			}
			ll ans = v[0];
			for (ll i = 1; i <v.size(); ++i){
				if (i%3==1)
				{
					ans = ans|v[i];
				}
				else if (i%3==2)
				{
					ans = ans^v[i];
				}
				else if(i%3==0) ans = ans+v[i];
			}
			ans = max(maxx,ans);
		}
		if (ans%2==check)
		{
			cout<<"Monk\n";
		}
		else cout<<"Mariam\n";
	}
	return 0;
}