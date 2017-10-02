#include <bits/stdc++.h>
#include<vector>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;

int main()
{
    ll n;
    cin>>n;
    vector <ll> v;
    ll el;
    for(ll i=0;i<n;i++){
        cin>>el;
        v.push_back(el);
        cout<<el<<" "<<i<<" "<<n<<"\n";
    }
    cout<<"hey\n";
}
