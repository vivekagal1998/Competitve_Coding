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
		ll n;
		cin>>n;
		ll a[n],b[32]={0};
		rep(i,0,n)cin>>a[i];
		for (ll i = 0; i < n; ++i){
			for (ll j = 0; j <32 ; ++j){
				if (a[i]&(1<<j))
				{
					b[j]++;
				}
			}
		}
		ll max=0;
		for (ll i = 31; i >=0 ; --i){
			if (b[i]>max)
			{
				max=i;
			}
		}
		cout<<max<<"\n";
	}
	return 0;
}