#include <bits/stdc++.h>
#include<math.h>
#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,q;
    cin>>n>>q;
    ll a[n],b[n];
    
    for(ll i=0;i<n;i++)cin>>a[i],b[i]=a[i];
    ll size;
    ll ans[n]={0},i;
    ll counter=(ll)ceil(log (n)/log (2));
    for(ll k=0;k<counter;k++){
        size=0;
        for(i=0;i<(n/2);i=i+2){
            if(a[i]>a[i+1]){
                a[size++]=a[i];
            }
            else{
                a[size++]=a[i+1];
	        } 
        }
        if(n%2==1) a[size++]=a[n-1];
        n=size;
        for(i=0;i<size;i++){
        	cout<<a[i]<<" ";
		}
		cout<<"\n";
    }
    return 0;
}

