#include<iostream>
using namespace std;
int gcd(int a,int b){
	if(b==0){
		return a;
	}
	return (b,a%b);
}
int main(){
	int x,y;
	cin>>x>>y;
	cout<<"GCD gives answer as "<<gcd(x,y);
}
