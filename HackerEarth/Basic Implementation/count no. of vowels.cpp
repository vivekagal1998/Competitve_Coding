#include <bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for (ll i = a; i <b ; ++i)

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//char a[]= {'a','e','i','o','u'};
	ll l = a.length;
	ll b[26]={0};
	string s;
	cin>>s;
	rep(i,0,s.length()){
		b[s[i]-'a']++;
	}
	cout<<b['a'-65]<<" "<<b['e'-65]<<" "<<b['i'-65]<<" "<<b['o'-65]<<" "<<b['u'-65];
	return 0;
}