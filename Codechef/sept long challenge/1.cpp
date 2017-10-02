#include <bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for (ll i = a; i <b ; ++i)

using namespace std;

/*string ip()
{
    string i="";
    int temp=getchar_unlocked();
    while(temp<'a'||temp>'z')
        temp=getchar_unlocked();
    while(temp>='a'&&temp<='z')
    {
        i+=(char)temp;
        temp=getchar_unlocked();
    }
    return i;
}

inline long long inp(){
        long long n = 0;
        char c = getchar_unlocked();
        while(c<'0'|| c>'9') c = getchar_unlocked();
        while(c>='0'&&c<='9')
        {
            n =(n<<3)+(n<<1)+c - '0';
            c = getchar_unlocked();
        }
        return n;
}*/

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[n];
		rep(i,0,n){
			cin>>a[i];
		}
		ll pre[n], suf[n];
		pre[0]=a[0];
		suf[n-1]=a[n-1];
		for (ll i = 1; i <n ; ++i){
			pre[i]=pre[i-1]+a[i];
			suf[n-i-1] = suf[n-i]+a[n-i-1];
		}	
		ll min=LLONG_MAX,ans=0;
		for (ll i = 0; i <n ; ++i){
			if ((pre[i]+suf[i])<min)
			{
				min=pre[i]+suf[i];
				ans=i;
			}
		}
		cout<<ans+1<<"\n";
	}
	return 0;
}
