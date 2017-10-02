#include <bits/stdc++.h>
#include<string.h>
#define ll long long int
#define rep(i,a,b) for (ll i = a; i <b ; ++i)

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll b[26]={0};
	char s[100];
	cin.getline(s,sizeof(s));
	//cout<<s.length()<<" is \n";
	for(ll i=0;i<sizeof(s);i++){
		cout<<"i is this "<<i<<"\n";
		if(s[i]==' ')continue;
		cout<<(int)s[i]-97<<" ";
		b[s[i]-'a']++;
	}
	//cout<<b['i'-97]<<"\n";
	//cout<<b[(int)'a'-97]<<" "<<b[(int)'e'-97]<<" "<<b[(int)'i'-97]<<" "<<b[(int)'o'-97]<<" "<<b[(int)'u'-97];
	return 0;
}
