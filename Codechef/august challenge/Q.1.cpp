#include<bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll price[26];
		rep(i,0,26){
			cin>>price[i];
		}
		string str;
		cin>>str;
		ll a[26]={0};
		for(ll i=0;i<str.length();i++){
			a[str[i]-'a']=1;
		}	
		ll sum=0;
		for(ll i=0;i<26;i++){
			if(a[i]!=1){
				//cout<<i<<" is ";
				sum = sum+price[i];
			}
		}
		cout<<sum<<"\n";
	}
}
