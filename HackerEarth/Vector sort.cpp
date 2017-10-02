#include <bits/stdc++.h>
#include<vector>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector <ll> v;
        ll el;
        for(ll i=0;i<n;i++){
            cin>>el;
            v.push_back(el);
            //cout<<el<<" "<<i<<" "<<n<<"\n";
        }
        //cout<<"Executed\n";
        ll flag=0,mi;
        while(flag==0){
            mi=min_element(v.begin(), v.end()) - v.begin()+1;
            //cout<<mi<<"\n";
            for(ll i=0; i<v.size();i++){
                v[i] = v[i]-mi;
                if(v[i]<0){
                    v.erase(v.begin()+i);
                    i--;
                }
            }
            if(v.size()==1){
                cout<<"Ladia";
                flag=1;
            }
            if(v.size()==0){
                cout<<"Kushagra";
                flag=1;
            }
            //cout<<flag<<"\n";
        }
    }
    return 0;
}

