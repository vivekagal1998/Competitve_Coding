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

int main()
{
	boost;
	ll t;
	cin>>t;
	ll n,x;
	ll a[6][1000];
	std::vector<std::vector<ll>> v;
	//std::vector<set<ll>> v;
	//ll a1[1000],a2[1000],a3[1000],a4[1000],a5[1000],a6[1000];
	ll flag=0;
	while(t--){
		cin>>n;
		//std::vector<ll> a;
		ll a[n];
		for (ll i = 0; i <n ; ++i){
			cin>>a[i];
			ll t = x;
			if (i==1)
			{
				continue;
			}
			else{
				if (a[i]==a[i-1])
				{
					cout<<"-1\n";
					flag=1;
					break;
				}
			}
		}
		if (flag==0)
		{
				
			ll o=0,t=0,th=0,f=0,fi=0,s=0;
			for (ll i = 0; i <n-1; ++i){
				if (a[i]==1)
				{
					arr[a[i]][o++] = a[i+1];
				}
				else if (a[i]==2)
				{
					arr[a[i]][t++] = a[i+1];	
				}
				else if (a[i]==3)
				{
					arr[a[i]][th++] = a[i+1];	
				}
				else if (a[i]==4)
				{
					arr[a[i]][f++] = a[i+1];
				}
				else if (a[i]==5)
				{
					arr[a[i]][fi++] = a[i+1];
				}
				else if (a[i]==6)
				{
					arr[a[i]][s++] = a[i+1];	
				}
			}
			












		//std::vector<set<ll>> v;
		/*while(t--){
			set<ll>s;
			cin>>n;
			ll a[n];
			rep(i,0,n)cin>>a[i];
			for (ll i = 1; i <n-1 ; ++i){
				v[i].pb(s.insert(a[i]));
			}
			//std::vector<ll> a;

	}
	return 0;
}