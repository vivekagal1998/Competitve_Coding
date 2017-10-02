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
	ll t,n;
	cin>>t;
	while(t--){
		ll c=0,s=0,e=0,e_m=0,m=0,m_h=0,h=0;
		cin>>n;
		string str;
		rep(i,0,n){
			cin>>str;
			if (str=="cakewalk")
			{
				c++;
			}
			else if (str=="simple")
			{
				s++;
			}
			else if (str=="easy")
			{
				e++;
			}
			else if (str=="easy-medium")
			{
				e_m++;
			}
			else if (str=="medium")
			{
				m++;
			}
			else if (str=="medium-hard")
			{
				m_h++;
			}
			else if (str=="hard")
			{
				h++;
			}
		}
		if (c>=1 && s>=1 && e>=1 && ((e_m>=1)||(m>=1)) && (m_h>=1 || h>=1)){
			cout<<"Yes\n";
		}
		else cout<<"No\n";
	}
	return 0;
}
