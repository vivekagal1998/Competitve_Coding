/*#include <bits/stdc++.h>
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
	ll n;
	cin>>n;//t = inp();
	ll a[n];
	rep(i,0,n)cin>>a[i];
	ll p[n]={0};
	ll start=0,end=n-1,sum=0;
	for (ll i = start; i <end ; ++i){
		if ((end==start)
		{
			sum+=a[end];
		}
		if((a[i]*a[i+1])>a[end]*a[end-1]){
			sum+=a[i]*a[i+1];
			i=i+1;
			start=start+2;
		}
		else{
			sum+=a[end]*a[end-1];
			i++;
			end=end-2;
		}
	}
	cout<<sum<<"\n";
	return 0;
}
*/
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
	ll n;
	cin>>n;//t = inp();
	ll a[n];
	rep(i,0,n)cin>>a[i];
	ll maxx[n];
	for (ll i = 0; i <n ; ++i){
		if (i==0)
		{
			maxx[i] = a[i];
		}
		if (i==1)
		{
			maxx[i] = a[i]*a[i-1];
		}
		else{
			maxx[i] = max(a[i]+maxx[i-1],a[i]*a[i-1]+maxx[i-2]);
		}
	}
	cout<<maxx[n-1];
	return 0;
}