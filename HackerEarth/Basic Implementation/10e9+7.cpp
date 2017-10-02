#include <bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for (ll i = a; i <b ; ++i)

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin>>n;
	ll a[n],m=1e9+7,ans=1;;
	rep(i,a,n){
		cin>>a[i];
		ans = (ans*(a[i]%m))%m;
	}
	cout<<ans%m;
	return 0;
}