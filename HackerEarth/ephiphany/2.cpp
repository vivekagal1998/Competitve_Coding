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
ll n,k,m;

ll power(ll b,ll e){
	ll r=1;
	while(b){
		if (e%2)
		{
			r = (r*b)%m;
		}
		b=(b*b)%m;
		e/=2;
	}
	return r;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n>>k>>m;
	ll p,sum=0;
	if (n<m)
	{
		for (ll i = 1; i <=n ; ++i){
			p = power(i,k);
			sum = ((sum) + (p*(n-i+1)))%m;
		}
	}
	else{
		for (ll i = 1; i <m ; ++i){
			p=power(i,k);
			if ((n-m-i+1)>0)
			{
				sum = (sum +(p*(2*n-2*i-m+2)))%m;
			}
			else sum = (sum +(p*(n-i+1)))%m;
		}
	}
	cout<<sum<<"\n";
	return 0;
}