#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    string str;
    cin>>str;
    str=str+" ";
    ll max1=0,ans=0,ans1=0,ans2=0;
    string word;
    for (ll i = 0; i<str.length(); i++){
        if(str[i]==' '){
            ans=abs(ans1-ans2);
            if(ans>max1)max1=ans;
            ans1=0,ans2=0;
        }
        else{
            int c=(int)str[i];
            if(c>=65 && c<=90){
                ans1++;
            }
            else if(c>=97 && c<=122){
                ans2++;
            }
        }
    }
    cout<<max1<<"\n";
    return 0;
}
