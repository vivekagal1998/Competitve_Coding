#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    ll a[t];
    ll b[t];
    cin>>t;
    for(ll i=0;i<t;i++){
        cin>>a[i];
    }
    b[0]=a[0];
    for(ll i=0;i<t;i++){
        b[i]=b[i-1]+a[i];
    }
    ll q;
    cin>>q;
    while(q--){
        ll target;
        cin>>target;
        ll flag=0;
        for(ll j=0;j<t&&flag==0;j++){
            if(b[j]>=target){
                flag=1;
                cout<<(j+1)<<"\n";
            }
        }
        if(flag==0){
            cout<<"-1\n";
        }
    }
    return 0;
}
