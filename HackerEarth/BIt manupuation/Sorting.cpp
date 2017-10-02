#include <bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define rep(i,a,b) for (ll i = a; i<b; ++i)

using namespace std;

struct def{
  ll in;
  ll c;
  ll e;
};

bool cmp(const def &a,const def &b){
    if(a.c<b.c)
        return true;
    else if(a.c==b.c)
        return (a.in<b.in);
    return false;
}


int main()
{
	boost;
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[n], ele;
		vector<def> v;
		rep(i,0,n){
			cin>>ele;
			struct def p;
			p.e = ele;
			p.in = i;
			p.c = __builtin_popcount(ele);
			v.push_back(p);
		}
		sort(v.begin(),v.end(),cmp);
		rep(i,0,n)
			cout<<v[i].e<<" ";
		cout<<"\n";
	}
	return 0;
}
