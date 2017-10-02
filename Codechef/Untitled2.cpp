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
	ll t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		set<ll> s;
		s.insert(0);
		ll a[n];
		rep(i,0,n)cin>>a[i];
		for (ll i = 1; i <(1<<n) ; ++i){
			ll ans=0;
			for (ll j = 0; j <n ; ++j){
				if (i&(1<<j))
				{
					ans = ans|a[j];	
				}
			}
			s.insert(ans);
		}
		ll ans1= pow(2,k)-s.size();
		if(ans1){
			ll op = (log2(ans1)+1);
			cout<<op<<"\n";
		}
		else{
			cout<<ans1<<"\n";
		}
	}
	return 0;
}
