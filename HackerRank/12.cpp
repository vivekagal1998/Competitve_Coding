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
	std::vector< set<ll> >v;
	ll flag=0;
	while(t--){
		cin>>n;
		//std::vector<ll> a;
		ll a[n];
		set<ll>s1,s2,s3,s4,s5,s6;
		for (ll i = 0; i <n ; ++i){
			cin>>a[i];
			ll t = x;
			if (i==1)
			{
				continue;
			}
			else if (a[i]==a[i-1])
			{
					cout<<"-1\n";
					flag=1;
					break;
			}
			else{
				if (a[i]==1)
				{
					s1.insert(a[i-1]);
				}
				else if (a[i]==2)
				{
					s2.insert(a[i-1]);
				}
				else if (a[i]==3)
				{
					s3.insert(a[i-1]);
				}
				else if (a[i]==4)
				{
					s4.insert(a[i-1]);
				}
				else if (a[i]==5)
				{
					s5.insert(a[i-1]);
				}				
				else if (a[i]==6)
				{
					s6.insert(a[i-1]);
				}								
			}
		}
		int b[7];
		if (flag==0)
		{
			for (ll i = 1; i <=6 ; ++i){
				if(i==1)v[i].insert(s1);
				else if(i==2)v[i].insert(s2);
				else if(i==3)v[i].insert(s3);
				else if(i==4)v[i].insert(s4);
				else if(i==5)v[i].insert(s5);
				else if(i==6)v[i].insert(s6);
			}
			for (ll i = 1; i <=3 ; ++i){
				flag=0;
				for (ll j = 1; j <=6 ; ++j){
					if (j==i)
					{
						continue;
					}
					if(!(std::binary_search(v[i].begin(), v[i].end(),j)){
						flag=1;
						b[i] = j;
						b[j] = i;
						break;
					}
				}
			}
			if(flag==1)rep(i,0,6)cout<<a[i]<<" ";
			else cout<<"-1";
			cout<<"\n";
		}
	}
}