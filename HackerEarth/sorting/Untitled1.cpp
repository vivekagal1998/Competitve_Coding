#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    string str[n];
    for(ll i=0;i<n;i++){
        cin>>str[i];
    }
    cout<<"0\n";
    int ans[n];
    for(ll i=1;i<n;i++){
        ll count=0;
        for(ll j=0;j<i;j++){
            if(str[j]<str[i])
                count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}

