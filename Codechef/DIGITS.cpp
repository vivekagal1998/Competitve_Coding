#include <bits/stdc++.h>
 
using namespace std;

int main()
{
    long long int x,y=0,k=0,i=0,j=1;
    char str[1000];
    scanf("%lld",&x);
    if(x==0) {printf("10"); return 0;}
    if(x==1) {printf("1"); return 0;}
    long long int temp=x;
    for(i=9;i>1 && x>0;i--){
    	while(x%i==0){
    		x=x/i;
    		str[k++]=i+'0';
    	}
    }
    for(i=k;i>=0;i--){
    	cout<<"\n"<<str[k]<<" ";
	}
}
