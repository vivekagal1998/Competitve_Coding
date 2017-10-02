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
ll ans(ll a,ll b,ll c){
	if (c==1)
	{
		return b; 
	}
	else{
		c--;
		ll sum=0;
		for (ll i = 0; i <c; ++i){
			sum=a+b;
			a=b;
			b=sum;
		}
		return sum;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin>>t;//t = inp();
	ll a,b,c;
	while(t--){
		cin>>a>>b>>c;
		cout<<ans(a,b,c)<<"\n";
	}
	return 0;
}