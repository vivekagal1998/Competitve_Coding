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
	ll n,b;
	cin>>n>>b;
	pair<ll,ll>p[n+1];
	ll f,s;
	char c;
	for (ll i = 0; i <n ; ++i)
		p[i].first = p[i].second[i] = -1;

	for (ll i = 0; i <n-1 ; ++i){
		cin>>f>>s>>c;
		if (c=='L')
		{
			p[i].first = s;
		}
		else p[i].second = s;
	}

	int qu;
	while(b--){
		cin>>qu;
		if (qu==1)
		{
			cout<<"1\n";
		}
		else{
			
		}
	}

	return 0;
}