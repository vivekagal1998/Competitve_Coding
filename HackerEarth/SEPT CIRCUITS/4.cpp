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
	ll n,k;
	cin>>n>>k;
	ll col[n];
	rep(i,0,n)cin>>col[i];
	ll t=n;
	std::vector<ll> v;
	ll e1,e2;
	for (ll i = 1; i <n; ++i){
		cin>>e1>>e2;
		v[e2].push_back(e1);
	}
	for (ll i = 2; i <n; ++i){
		if (v[i].front()!=1)
		{
    		v[i].assign(v[v[i].front()].begin(), v[v[i].front()].end());
		}
	}
	cout<<"-1 ";
	ll kk=0;
	for (ll i = 2; i <=n ; ++i){
		for (ll j = 0; j<v[i].size(); ++j){		
			if (col[i]==col[j])
			{
				kk++;
				if (kk==k)
				{
					cout<<v[j]<<" "<<"\n";
					break;
				}
			}
		}
		if (kk!=k)
		{
			cout<<<<" ";
		}
	}
	return 0;
}