#include<iostream>
using namespace std;

template <class x>
void swap(x *a,x *b){
	x tp;
	tp = *a;
	*a=*b;
	*b=tp;
}
int main(){
	int a=10,b=30;
	float c=20.5,d=55.5;
	swap(&a,&b);
	swap(&c,&d);
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<" ";
}
