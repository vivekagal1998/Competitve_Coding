#include <bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for (ll i = a; i <b ; ++i)

using namespace std;

ll a[]={67,71,73,79,83,89,97,101,103,107,109,113};

char abc(char c){
	ll diff=INT_MAX,p;
	for (ll i = 0; i <12 ; ++i){
		ll x = abs(a[i]-c);
		if (x<diff)
		{			
			diff = x;
			p = a[i];
		}
	}
	return (char)p;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
		string str,ans="";
		ll l;
		cin>>l;
		cin>>str;
		rep(i,0,l)
			ans = ans + abc(str[i]);
		cout<<ans<<"\n";
	}
	return 0;
}