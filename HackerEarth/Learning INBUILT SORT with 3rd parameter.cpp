#include<bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

struct def{
	string s;
	ll roll;
	ll mark;
};

struct def temp;

bool cmp(def a,def b){
	if(a.mark>b.mark)return true;
	else if(a.mark == b.mark){
		if(a.s<b.s) return true;
		else if(a.s==b.s)return a.roll<b.roll;
		else return false;		
	}
	else return false;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin>>n;
	string s;
	ll roll,mark;
	vector<def> v;
	rep(i,0,n){
		cin>>s>>roll>>mark;
		temp.s=s;
		temp.roll=roll;
		temp.mark=mark;
		v.push_back(temp);
	}
	sort(v.begin(),v.end(),cmp);
	vector<def>::iterator itr;
	for(itr=v.begin();itr!=v.end();itr++)
		cout<<itr->s<<" "<<itr->roll<<" "<<itr->mark<<"\n";
}
