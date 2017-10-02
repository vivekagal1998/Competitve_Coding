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
	string str1,str2;
	while(t--){
		cin>>str1>>str2;
		ll flag=0;
		ll l1=str1.length(),l2=str2.length();
		if (l1<l2)
		{
			cout<<"NO\n";
		}
		else{
			ll a[26]={0};
			//pair<char,ll>p[26];
			for (ll i = 0; i <l2 ; ++i){
				a[str2[i]-'a']++;
				//p[str[i]-'a']=make_pair(str[i],)
			}
			ll flag = 0;
			for (ll i = 0; i <=(l1-l2); ++i){
				string sub = str1.substr(i,l2);
				for (ll j = 0; j <sub.length() ; ++j){
					--a[sub[j]-'a'];
				}
				ll count=0;
				for (ll k = 0; k <l2 ; ++k){
					if (a[str1[k]-'a']==0)
					{
						count++;
						/*cout<<"NO\n";
						flag=1;
						break;*/
					}
				}
				if (count==l2)
				{
					cout<<"YES\n";
					flag=1;
					break;
				}
			}
			if (flag==0)
			{
				cout<<"NO\n";
			}
		}
	}
	return 0;
}