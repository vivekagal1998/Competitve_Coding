#include <bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for (ll i = a; i <b ; ++i)

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		ll a[10];
		for (ll i = 0; i <str.length() ; ++i){
			a[str[i]-'0']++;
		}
		ll flag=0;
		for (ll i = 6; i <=9 ; ++i){
			for (ll j = 0; j <=9 ; ++j){		
				if (i==6&&j<5)
				{
					j==5;
				}
				if(i==j){
					if (a[i]>1 && a[j]>1)
					{
						cout<<(char)(i*10+j);
					}
					continue;
				}
				if (a[i]>0 && a[j]>0)
				{
					flag=1;	
					cout<<(char)(i*10+j);
				}
			}
		}
		if (flag==0)
		{
			cout<<"\n";
		}
		cout<<"\n";*/
	}
	return 0;
}
