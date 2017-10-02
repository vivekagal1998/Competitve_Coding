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
		ll n;
		cin>>n;
		ll a[n];
		ll max=0;
		for (ll i = 1; i <=n ; ++i){
			cin>>a[i];
			if(a[i]>max)max=a[i];
		}
		ll b[max+1]={0};
		for (ll i = 1; i <=max ; ++i){
			b[a[i]]++;
		}
		ll flag=0,ans=0;
		for (ll i = 1; i <=max && flag==0 ; ++i){
			if(b[i]==0)continue;
			else if(b[i]==1){
				ans=i;
				flag=1;
			}
		}
		if (flag==0)
		{
			cout<<"-1\n";
		}
		else cout<<ans<<"\n";
	}
	return 0;
}