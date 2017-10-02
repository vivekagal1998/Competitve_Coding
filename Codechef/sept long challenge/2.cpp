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
	cin>>t;//t = inp();
	while(t--){
		ll n;
		cin>>n;
		ll a[n];
		/*for (ll i = 2; i <=n ;i=i+2){
			a[i-2]=i;
		}	
		for (ll i = 1; i <=n ;i=i+2){
			if(i==n)
				a[i-1]=i;
		}
		if (n%2)
		{
			ll temp=a[n-1];
			a[n-1]=a[n-2];
			a[n-2]=temp;
		}
		rep(i,0,n)cout<<a[i]<<" ";
		cout<<"\n";*/
		ll j=1,k=2;
		for (ll i = 0; i <n; ++i){
			if (i%2==0)
			{
				a[i]=k;
				k+=2;
			}
			else{
				a[i]=j;
				j+=2;
			}
		}
		ll temp;
		if (n%2==1)
		{
			--a[n-1];
			temp=a[n-1];
			a[n-1]=a[n-2];
			a[n-2]=temp;
		}
		rep(i,0,n)cout<<a[i]<<" ";
		cout<<"\n";
	}
	return 0;
}