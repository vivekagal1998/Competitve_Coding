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
		ll count=0;
		rep(i,1,n+1){
			rep(j,i+1,n+1){
				if ((j^i)<=n)
				{
					count++;
				}
			}
		}	
		cout<<count<<"\n";
	}
	return 0;
}