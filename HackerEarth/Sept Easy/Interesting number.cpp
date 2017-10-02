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
}
*/
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll p,z;
	string l,r;
	cin>>p>>l>>r>>z;
	ll ele,b[10];
	memset(b,0,sizeof(b));
	rep(i,0,z){
	    cin>>ele;
	    b[ele]++;
	}
	ll c=0, dig;
	ll ans = (l - (l%p)) + p;
	for (ll i = ans; i <=r ; i=i+p){
	    ll t=i;
		while(t){
			dig=t%10;
			if(b[dig]!=0){
				c++;
				//cout<<i<<"  ";
			    break;
			}
			t/=10;
		}
	}
	cout<<c<<"\n";
    /*int x;
    for (int i = l; i <= r; i++) {
        if (i % p == 0) {
            int f = 0;
            int a = i;

            while (a > 0) {
                x = a % 10;

                if (!b[x]) {
                    f = 1;
                    break;
                }
                a = a / 10;
            }
            if (f == 0) {
                c++;
            }
        }
    }
	cout<<c<<"\n";*/
	return 0;
}
