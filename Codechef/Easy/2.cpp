#include <bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for (ll i = a; i<b; ++i)

using namespace std;

ll gcd(ll a,ll b){
	return (b==0)?a:gcd(b,a%b);
}

ll lcm(ll a,ll b){
	return (a*b)/gcd(a,b);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin>>t;
	ll a,b;
	while(t--){
		cin>>a>>b;
		cout<<gcd(a,b)<<" "<<lcm(a,b)<<"\n";
	}
	return 0;
}