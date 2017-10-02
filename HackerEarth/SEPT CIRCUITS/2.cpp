/******************************************
*    AUTHOR         :   VIVEK SHAH        *
*    INSTITUTION    :   NIT SURAT         *
******************************************/

#include <bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define rep(i,a,b) for (ll i = a; i<b; ++i)

using namespace std;

int main()
{
	boost;
	int n,k,m;
	cin>>n>>k>>m;
	pair<int,int> sum[n];
	rep(i,0,n)sum[i].first=0;
	int e;
	for (int j = 0; j<m;++j){
		for(int i=0;i<n;i++){
			cin>>e;
			sum[i].first+=e;
		}		
	}
	for(int i=0;i<n;i++){
		cin>>e;
		sum[i].first-=e;
		sum[i].second = i+1;
	}		
	sort(sum,sum+n);
	for (int i = n-1; i>n-1-k;i--)
		cout<<sum[i].second<<" ";
	cout<<"\n";
	return 0;
}