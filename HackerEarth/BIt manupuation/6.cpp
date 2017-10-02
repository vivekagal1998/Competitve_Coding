#include <bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for (ll i = a; i<b; ++i)

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin>>t;
	string str1,str2;
	while(t--){
		cin>>str1>>str2;
		ll l1 = str1.length(),l2=str2.length();
		ll a1[26]={0},a2[26]={0};
		for (ll i = 0; i <l1 ; ++i){
			++a1[i];
		}
		for (ll i = 0; i <l2 ; ++i){
			if (a[i]>0)
			{
				cout<<"Yes\n";
			}
			else cout<<"No\n";
		}
	}
	return 0;
}