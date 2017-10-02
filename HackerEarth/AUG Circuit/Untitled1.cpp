#include <bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

void fastscan(ll &number)
{
    //variable to indicate sign of input number
    bool negative = false;
    register ll c;
 
    number = 0;
 
    // extract current character from buffer
    c = getchar();
    if (c=='-')
    {
        // number is negative
        negative = true;
 
        // extract the next character from the buffer
        c = getchar();
    }
 
    // Keep on extracting characters if they are integers
    // i.e ASCII Value lies from '0'(48) to '9' (57)
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
 
    // if scanned input has a negative sign, negate the
    // value of the input number
    if (negative)
        number *= -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,q;
    fastscan(n);
    fastscan(q);
    ll a[n],ans=0;
    rep(i,0,n){
        fastscan(a[i]);
        //sum1+=a[i];
    }
    ll b,x,y;
    ll sum1=0;
    int flag=0;
    while(q--){
        fastscan(b);
        fastscan(x);
        if(b==1){
            fastscan(y);
            a[x-1]=y;
        }
        else{
            sum1=0;
            for(ll i=0;i<n;i++){
                sum1=sum1 + (a[i]/x);
            }
            cout<<sum1<<"\n";
        }
    }
    return 0;
}
