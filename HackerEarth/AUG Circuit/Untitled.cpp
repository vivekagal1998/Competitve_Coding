#include <bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

int main()
{
    //cout << "Hello World!" << endl;
    string str;
    ll n;
    cin>>str;//>>n;
    //ll a[n];
    //rep(i,0,n)cin>>a[i];
    
    string sub;
    
    ll c,i,length = str.length();
    for( c = 0 ; c < length ; c++ )
    rep(c,0,length){
        rep(i,1,length-c+1){
            sub = str.substr(c, i);
        //cout<<sub<<"\n";
        }
    }
    
    return 0;
}

