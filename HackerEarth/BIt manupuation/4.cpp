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
		ll i=0;
		while((n&(1<<i)!=0){
			i++;
		}	
		n = n|(1<<i);
		cout<<n<<"\n";
	}
	return 0;
}
