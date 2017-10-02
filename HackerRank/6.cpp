/******************************************
*    AUTHOR         :   VIVEK SHAH        *
*    INSTITUTION    :   NIT SURAT         *
******************************************/

#include <bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define mod 1000000007
#define rep(i,a,b) for (ll i = a; i<b; ++i)

using namespace std;

void fib(ll n,ll ans[]){
	if (n==0)
	{
		ans[0] = 0;
		ans[1] = 1;
		return;
	}
	fib(n/2,ans);
	a = ans[0];//a=f[n]
	b = ans[1];//b=f[n+1]
	c = (2*a-1);
	if (c<0)
	{
		c+=mod;
	}
	c = (a*c)%mod;
	d = (a*a + b*b)%mod;
	if (n%2==0)
	{
		ans[0] = c;
		ans[1] = d;
	}
	else{
		ans[0] = d;
		ans[1] = c+d;
	}
}

int main()
{
	boost;
	ll t;
	ll a,b,c,d;
	a=b=c=d=0;
	ll ans[2] = {0};
	cin>>t;
	while(t--){
		cin>>n;
		fib(n,ans);
		cout<<ans[0]<<"\n";	
	}
	return 0;
}