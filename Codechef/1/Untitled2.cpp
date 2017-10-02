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
	std::vector<set<ll> >v;
	ll flag=0;
	while(t--){
		cin>>n;
		ll a[n];
		set<ll>s1,s2,s3,s4,s5,s6;
		for (ll i = 0; i <n ; ++i){
			cin>>a[i];
			if (i==0)
			{
				continue;
			}
			else if (a[i]==a[i-1])
			{
				cout<<t<<" -1\n";
				flag=1;
				break;
			}
			else{
				if (a[i-1]==1)
				{
					s1.insert(a[i]);
				}
				else if (a[i-1]==2)
				{
					s2.insert(a[i]);
				}
				else if (a[i-1]==3)
				{
					s3.insert(a[i]);
				}
				else if (a[i-1]==4)
				{
					s4.insert(a[i]);
				}
				else if (a[i-1]==5)
				{
					s5.insert(a[i]);
				}				
				else if (a[i-1]==6)
				{
					s6.insert(a[i]);
				}								
			}
		}
		int b[7];
		if (flag==0)
		{
			for (ll i = 1; i <=6 ; ++i){
				if(i==1)	 v.push_back(s1);
				else if(i==2)v.push_back(s2);
				else if(i==3)v.push_back(s3);
				else if(i==4)v.push_back(s4);
				else if(i==5)v.push_back(s5);
				else if(i==6)v.push_back(s6);
			}
			for (ll i = 1; i <=3 ; ++i){
				flag=0;
				for (ll j = 1; j <=6 ; ++j){
					if (j==i)
					{
						continue;
					}
					if(!(std::binary_search(v[i].begin(), v[i].end(),j))){
						flag=1;
						b[i] = j;
						b[j] = i;
						break;
					}
				}
				if(flag==0){cout<<"-1\n";break;}
			}
			if(flag==1)rep(i,1,7)cout<<b[i]<<" ";
			else cout<<" -1\n";
			cout<<"\n";
		}
		
	}
}
