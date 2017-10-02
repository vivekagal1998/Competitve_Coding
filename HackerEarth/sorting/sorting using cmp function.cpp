#include <bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for (ll i = a; i<b; ++i)

using namespace std;

struct pai
{
	int a;
	int b;
};

bool cmp(struct pai s){
	if (s.a>s.b)
	{
		return true;
	}
	return false;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin>>n;
	struct pai p[20];
	for (ll i = 0; i <n ; ++i){
		cin>>p[i].a>>p[i].b;
	}
	sort(p,p+n,cmp);
	for (ll i = 0; i <n ; ++i){
		cout<<p[i].a<<p[i].b;
	}
	return 0;
}
