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
	ll n;
	ll a2=0,a3=0,a5=0,a7=0;
	while(t--){
		cin>>p;
		if (p==0)
		{
			cout<<"10\n";
		}
		else if (p==1)
		{
			cout<<"1\n";	
		}
		else{
			while(x%2==0 && x>0){
				a2++;
				x/=2;
			}
			while(x%3==0 && x>0){
				a3++;
				x/=3;
			}
		}
	}
	return 0;
}