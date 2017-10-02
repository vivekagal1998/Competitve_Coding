#include<iostream>
using namespace std;
void exponent(long long int x,long long int n){
	long long int result=1;
	int y=1;
	while(n>0){
		if(n%2){//n is odd
			result*=x;
		}
		x*=x;
		n/=2;
		y++;
	}
	cout<<"Ans for exponent is given as "<<result;
	cout<<"\n Complexity is "<<y;
}

int main(){
	exponent(2,55);
}

