#include <bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for (ll i = a; i <b ; ++i)

using namespace std;

bool prime(ll n){
	ll flag=0;
	rep(i,2,sqrt(n)+1){
		if (!(n%i))
		{
			flag=1;
			break;
		}
	}
	if (flag==0)return true;
	else return false;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	return prime(n);	
}