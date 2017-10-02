#include<bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

ll start,end;

void swap(ll* a,ll* b){
	ll temp = *a;
	*a = *b;
	*b = temp;
}

ll partition(ll a[],ll start,ll end){
	ll i = start + 1;
	ll pivot = a[start];
	for(ll j = start+1;j<=end;j++){
		if(a[j]<pivot){
			swap(&a[i],&a[j]);
			i++;
		}
	}
	swap(&a[start],&a[i-1]);//placing pivot to proper position
	return i-1;
}


ll quicksort(ll a[],ll start,ll end){
	if(start<end){
		int pivot = partition(a,start,end);
		quicksort(a,start,pivot-1);
		quicksort(a,pivot+1,end);
	}
}

int main(){
	ll a[]={7,4,2,68,21,2,90,10,1};
	
	start=0,end=sizeof(a)/sizeof(a[0]) - 1;
	quicksort(a,start,end);
	
	rep(i,start,end+1)cout<<a[i]<<" ";
}
