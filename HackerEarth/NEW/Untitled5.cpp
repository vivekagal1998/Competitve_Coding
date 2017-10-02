#include <bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for (ll i = a; i<b; ++i)

using namespace std;


int isVowel(char a){
	return (a=='a'||a=='e'||a=='i'||a=='o'||a=='u');
}
int check(char a,char b){
	if (isVowel(a) && !isVowel(b))
	{
		return 1;
	}
	else if(!isVowel(a) && isVowel(b))return 1;
	return 0;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin>>t;
	string str;
	while(t--){
		int c=0;
		cin>>str;
		int n=str.length();
      	for(int i = 0; i < n; i++) {
        	for(int len = 1; len <= n - i; len++){
            	string sub = str.substr(i, len);
	            int l = sub.length();
	            if (check(sub[0],sub[l-1]))
	            {
	            	c++;
	            }
	         }
	      }
	    cout<<c<<"\n";  
	}
	return 0;
}
