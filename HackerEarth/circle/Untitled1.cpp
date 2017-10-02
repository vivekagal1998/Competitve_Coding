#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll s[n+2];
    s[0]=s[n+1]=0;
    for(ll i=1;i<=n;i++)cin>>s[i];
    ll ans[n];
    ll counter=0;
    
    for(ll i=1;i<=n;i++){
        if(s[i]>s[i-1] || s[i]>s[i+1]){
            ans[counter++]=i;
        }
    }
    
    for(ll i=0;i<counter;i++)cout<<ans[i]<<" ";
    return 0;
}

