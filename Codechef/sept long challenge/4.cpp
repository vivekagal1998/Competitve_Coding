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
		ll n,q;
		cin>>n>>q;
		ll a[n][n];
		memset(a,-1,sizeof(a));
		ll i,j,val,flag=0;
		pair<ll,ll>p[q];
		/*for (ll k = 0; k <q; ++k){
			cin>>i>>j>>val;
			a[i-1][j-1]=val;
			p[k]=make_pair(i-1,j-1);
			//symm reflextive a[i][i]=0
			//[i][j]=0 [j][k]=0 then [i][k]must be 0
		}*/
		//transitivity won't work if 3 elements r not 0
		ll f,s;
		for (ll m = 0; m <q; ++m){
			cin>>i>>j>>val;
			a[i-1][j-1]=val;
			p[m]=make_pair(i-1,j-1);
			f=p[m].first;
			s=p[m].second;
			//cout<<a[f][s]<<" "<<a[s][f]<<"\n";
			if (f==s &&a[f][s]!=0)
			{
				//cout<<f<<" "<<s<<"1";
				flag=1;break;
			}
			if (a[f][s]!=a[s][f] &&a[s][f]!=-1)
			{
				//cout<<f<<" "<<s<<"2";
				flag=1;break;
			}
			/*for (ll o = 0; o <q &&flag==0; ++o){
				ll x=p[o].first,y=p[o].second;
				if (s==x && f==o)
				{
					if ((a[f][s]+a[s][o])!=a[f][o])
					{
						cout<<f<<" "<<s<<"3";
						flag=1;continue;
					}
				}
			}*/
		}
		if (!flag)
		{
			for (ll i = 0; i <q ; ++i){
				for (ll j = 0; j<i ; ++j){
					ll w=p[j].first,x=p[j].second,y=p[i].first,z=p[i].second;
					if (x==y && w!=z && a[w][z]!=-1)
					{
						if ((a[w][x]+a[y][z])!=a[w][z])
						{
							//cout<<a[w][x]<<" "<<a[y][z]<<" "<<a[w][z]<<"\n";
							flag=1;
							break;
						}
					}
				}
			}
		}
		if (flag)
		{
			cout<<"no\n";
		}
		else cout<<"yes\n";
	}
	return 0;
}
		/*for (ll i = 0; i <n; ++i){
			for (ll j = 0; j <n ; ++j){
				if (a[i][j]==-1)
				{
					continue;
				}
				if (i==j && a[i][j]!=0)
				{
					flag=1;
					break;
				}
				if (a[i][j]!=a[j][i])
				{
					flag=1;
					break;
				}
				else{
					for (ll k = 0; k <n ; ++k){
						if (a[k]==-1)
						{
							continue;
						}
						if ((a[i][j]+a[j][k])!=a[i][k])
						{
							flag=1;
							break;
						}
					}
				}
			}
		}

		if (flag==1)
		{
			cout<<"no\n";
		}
		else{
			cout<<"yes\n";
		}
	}
	return 0;
}*/
