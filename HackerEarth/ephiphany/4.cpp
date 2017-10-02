#include <bits/stdc++.h>
#define ll long long int
#define dd double
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL);
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
}*/
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
 
int main()
{
	boost
	int n;
	cin>>n;
	int a[n],c=0;
	rep(i,0,n)cin>>a[i];
	int t1,u,v,y,x,w,z;
	for (u= 0; u<n ; u++){
		for (v= 0; v<n ; v++){
			for (y = 0; y <n ; y++){
				for (x = 0; x<n; x++){
				    if(a[x]){
    					for (w = 0; w <n ; w++){
    						for (z = 0; z < n; z++){
    							t1=((a[u]+a[v])*a[y])-(a[x]*(a[z]+a[w]));
    							if (!t1)
    							{
    								c++;
    							}
    						}
    					}
				    }
				}
			}
		}
	}
	cout<<c<<"\n";
