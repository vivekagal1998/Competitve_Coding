/******************************************
*    AUTHOR         :   VIVEK SHAH        *
*    INSTITUTION    :   NIT SURAT         *
******************************************/

#include <bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define rep(i,a,b) for (ll i = a; i<b; ++i)

using namespace std;

ll ans[100001]={0};

int main()
{
	boost;
	ll n;
	cin>>n;
	ll a[n];
	rep(i,0,n)cin>>a[i];
	for (ll i = 0; i <n; ++i){
		for (ll j = 1; j <=sqrt(a[i]) ; ++j){
			if (j==sqrt(a[i]) && a[i]%j==0)
			{
				ans[j]++;
			}
			else if (a[i]%j==0)
			{
				ans[j]++;
				ans[a[i]/j]++;
			}
		}
	}
	ll q,x;
	cin>>q;
	while(q--){
		cin>>x;
		cout<<ans[x]<<"\n";
	}
	return 0;
}