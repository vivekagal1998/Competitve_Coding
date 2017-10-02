#include <bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for (ll i = a; i <b ; ++i)

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll a[1000]={0};
	a[2]=1;
	rep(i,2,1001){
		ll count = 0;
		rep(j,1,sqrt(i)+1){
			if (j==sqrt(i) && i%j==0)
				count++;
			else if(i%j==0)count+=2;
		}
		if(count==2)a[i]=1;
	}
	ll n;
	cin>>n;	
	rep(i,2,n+1){
		if (a[i]==1)
		{
			cout<<i<<" ";
		}
	}
	return 0;
}