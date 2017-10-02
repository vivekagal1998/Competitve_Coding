#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vint vector <int>
#define vll vector <long long int>
#define endl '\n'
#define fr(i,l,n) for(int i=l;i<n;++i)
#define tab '\t'
#define debug cout<<'*';
typedef long long int ll;
typedef unsigned long long int ull;
#define w(t) while(t--)
#define MOD 1000000007
ll m=1000000007;
 
 
 
ll modpow(ll x, ll n, ll m) 
{
    if(n == 0) return 1;
    if(n == 1) return x%m;
    if(n == 2) return (x*x)%m;
    ll ans = 1;
    while(n != 0) 
    {
        if(n&1) ans = (ans*x)%m;
        x = (x*x)%m;
        n >>= 1;
    }
    return ans;
}
 
 
 
ll modinv(ll x, ll m) 
{
    return modpow(x, m-2, m);
}
 
 
 
int main()
{
    ios::sync_with_stdio(false);
    ll n;
    cin>>n;
    if(n==0)
    {
        cout<<"10\n";
    }
    else if(n==1)
    {    
        cout<<"1\n";
    }
    else
    {
        bool valid =true;
        string ans;
        cout<<(valid&n)<<"this ";
        while(valid&n!=1)
        {
        	cout<<(valid&n)<<" ";
            valid = false;
            for(int i=9;i>1;i--)
            {
                if(n%i==0)
                {
                    valid=true;
                    ans+=char('0'+i);
                    n=n/i;
                    break;
                }
            }
        }
        reverse(ans.begin(),ans.end());
        if(!valid)
        {
            //cout<<"5555555555555\n";
        }
        else
        {
            //cout<<ans.c_str()<<endl;
        }
    }
    return 0;
}
