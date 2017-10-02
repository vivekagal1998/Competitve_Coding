#include <bits/stdc++.h>
#include<string>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll a[n];
    string str[n];
    ll maxx = 0;
    rep(i,0,n){
        cin>>a[i];
        //string str[i] = to_string(a[i]);
        itoa (a[i],str[i],10);
        if(maxx<str[i].length())maxx=str[i].length();
    }
    ll b[n];
    maxx=ceil((double)maxx/5);
    //ll ele = a[i],num=0,j=i*5;
    /*while(j<(5*(i+1)) && ele>0){
        num = num*10 + ele%10;
        ele/=10;
        j++;
    }*/
    pair<ll,ll>p[n];
    for(ll j=1;j<=maxx;j++){
        for(ll i=0;i<n;i++){
            ll l=str[i].length();
            ll ans = l-(5*j)-1;
            ll ans1=5;
            if(ans<0){
                ans=0;
                ans1 = l%5;
            }
            string s = str[i].substr(ans,ans1);
            int just = std::stoi(s);
            p[i] = make_pair(just,a[i]);
        }
        sort(p,p+n);
        for(ll i=0;i<n;i++)cout<<p[i].second<<" ";
        cout<<"\n";
    }
    return 0;
}

