#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    while(n--){
        ll i=0;
        string str[50],s;
        pair<int,string> p[50];
        ll flag=0;
        while(!cin.eof()&&flag==0){
        	cin>>str[i];
        	if(str[i]=="\n"){
        		flag=1;
				continue;
			}
            ll l=str[i].length();
            p[i]=make_pair(l,str[i]);
            i++;
        }
        sort(p,p+i);
        for(ll j=0;j<i;j++){
            cout<<p[j].second<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

