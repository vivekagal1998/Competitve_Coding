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
}
*/
int main()
{
	boost;
	ll t;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;//a nd b defined for range 1-n
		ll ans[n+2]={0},ans1[n+2]={0};
		ll f[m+1] = {0},s[m+1] = {0},comm[m+1]={1},comm_d[m+1]={1},l,t[m];
		for(ll k =1;k<=m;k++){
			comm[k]=1;
		}
		for (ll i = 1; i <=m; ++i){
			cin>>t[i]>>f[i]>>s[i];
		}
		for(ll j=m;j>=1;j--){
			if (t[j]==2)
			{
				for (ll k = f[j]; k<=s[j] ; ++k){
					comm[k]+=comm[j];
				}
				comm[j]=0;
			}
		}
		for(ll i=1;i<=m;i++){
			if(t[i]==1){
				ans1[f[i]]+= comm[i];
				ans1[s[i]+1]+= -comm[i];
			}
		}
		
		for (ll i = 1; i <=m ; ++i){
			ans[i]=ans1[i]+ans[i-1];
			cout<<ans[i]<<" ";
		}
	}
	return 0;
}