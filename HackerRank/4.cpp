/******************************************
*    AUTHOR         :   VIVEK SHAH        *
*    INSTITUTION    :   NIT SURAT         *
******************************************/

#include <bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define rep(i,a,b) for (ll i = a; i<b; ++i)

using namespace std;

ll gcd(ll a,ll b){
	return (b==0)?a:gcd(b,a%b);
}

int main()
{
	boost;
	ll n;
	cin>>n;
	ll a[n];
	rep(i,0,n)cin>>a[i];
	ll max=LLONG_MIN;
	ll anss = a[n-1],ans1;
	for (ll i = n-1; i>=0 ; --i){
		for (ll j = n-1;j>=i; ++j){
			ans=gcd(ans,a[j]);
		}
		if (ans>max)
		{
			max=ans;
			ans1=i;
		}
	}
	cout<<ans1<<"\n";
	return 0;
}