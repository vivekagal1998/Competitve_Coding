#include <bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for (ll i = a; i <b ; ++i)

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,i,j;
	string str;
	cin>>t;
	while(t--){
		cin>>str;
		ll a[10]={0};
		for (i = 0; i <str.length() ; ++i){
			a[str[i]-'0']++;
		}
		for (i = 6; i <=9 ; ++i){
			for (j = 0; j <=9 ; ++j){		
				if (i==6&&j<5)
				{
					continue;
				}
				if(i==9 && j>0)continue;
				if(i==j){
					if (a[i]>1 && a[j]>1)
					{
						cout<<(char)(i*10+j);
					}
					continue;
				}
				if (a[i]>0 && a[j]>0)
				{
					cout<<(char)(i*10+j);//<<" "<<i<<j<<" ";
				}
			}
		}
		cout<<"\n";
	}
	return 0;
}

