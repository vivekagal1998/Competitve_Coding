#include <bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for (ll i = a; i <b ; ++i)

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
		ll l;
		cin>>l;
		string str;
		cin>>str;
		ll count=0;
		rep(i,0,l){
			if(!(str[i]-'0')&1)
				count++;
		}
		cout<<count<<"\n";
	}
	return 0;
}