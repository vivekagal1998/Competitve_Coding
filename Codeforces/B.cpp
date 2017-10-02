#include <bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for (ll i = a; i<b; ++i)

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll ax,ay,bx,by,cx,cy;
	cin>>ax>>ay>>bx>>by>>cx>>cy;
	
	if ((ax==bx || ay==by) && (bx==cx || by==cy))
	{
		cout<<"Yes\n";
	}
	else cout<<"No\n";
	return 0;
}