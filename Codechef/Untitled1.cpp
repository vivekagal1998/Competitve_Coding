//Author: Vivek Shah

#include <bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define rep(i,a,b) for (ll i = a; i<b; ++i)

using namespace std;

/*inline void fastscan(ll &x) {
    register ll c = getchar_unlocked();
    x = 0;
    ll neg = 0;
    
    for(; ((c<48 || c>57) && c != '-'); c = getchar_unlocked());
    
    if(c=='-') {
    	neg = 1;
    	c = getchar_unlocked();
    }
    
    for(; c>47 && c<58 ; c = getchar_unlocked()) {
    	x = (x<<1) + (x<<3) + c - 48;
    }
    
    if(neg)
    	x = -x;
}*/

int main()
{
	boost;
	ll t;
	cin>>t;
	string str;
	while(t--){
		cin>>str;
		ll n = str.length();
		ll k=0;
		ll flag = 0;
		char a[26]={0};
		for (ll i = 0;i<n;i++){
			a[str[i]-'a']++;
		}
		for (ll i = 0; i <26 ; ++i){
			if (a[i]>1)
			{
				flag=1;
				break;
			}
		}
		if (flag==1)
		{
			cout<<"yes\n";
		}
		else cout<<"no\n";
	}
	return 0;
}
