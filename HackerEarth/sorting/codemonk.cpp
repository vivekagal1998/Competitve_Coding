#include <bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

int main()
{
    /*ios_base:sync_with_stdio(false);
    cin.tie(NULL);*/
    string s;
    ll k;
    cin>>s>>k;
    string str[s.length()];
    for(ll i=0;i<s.length();i++){
        str[i] = s.substr(i);
    }
    sort(str,str+s.length());
    cout<<str[k-1];
    return 0;
}
