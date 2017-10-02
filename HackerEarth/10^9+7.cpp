#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    ll m=1e9+7;
    ll t;
    cin>>t;
    int size=1e18+1;
    ll a[size]={0};
    a[0]=0;
    a[1]=1;
    a[2]=6;
    for(int i=3;i<size;i++){
        a[i]=(((2*a[i-1])%m)-(a[i-2]%m)+4)%m;
    }

    while(t--){
        int n;
        cin>>n;
        cout<<a[n]<<"\n";
    }

    return 0;
}

