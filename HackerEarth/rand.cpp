#include <bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;


ll power(ll base,ll expo,ll m){
    ll result=0;
    while(expo>0){
        if(expo%2==1) result=(result*base);//%m;
        base=(base*base);//%m;
        expo=expo/2;
    }
    return result;
}

int main()
{
    ll n,k,m,sum=0;
    cin>>n>>k>>m;
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=i;j++){
            cout<<"Executed\n";
            sum = (sum + (power(j,k,m)));
        }
    }
    cout<<sum<<"\n";
    return 0;
}