#include<bits/stdc++.h>

using namespace std;

int main(){
int t;
cin>>t;

while(t--){
	int b,d;
	cin>>b>>d;
	int a[b],sum=0;
	for(int i=0;i<b;i++){
		cin>>a[i];
		sum+=a[i];
	}
	int ans;
	if(sum%b==0){
		ans=(sum/b);
		int counter =0;
		for(int i=0;i<=(b-d);i++){
			while(a[i]!=ans){
				if(a[i]>a[i+d]){
					a[i]=a[i]-1;
					a[i+d]=a[i+d]+1;
				}
				else{
					a[i]=a[i]+1;
					a[i+d]=a[i+d]-1;
				}
				counter++;
				//cout<<"a["<<i<<"] = "<<a[i]<<"\n";
			}
		}
		int flag=0;
		for(int i=0;i<b;i++){
			if(a[i]!=ans){
				flag=1;
				break;
			}
		}
		if(flag==0){
			cout<<counter<<"\n";
		}
		else{
			cout<<"-1\n";
		}
	}
	else{
		cout<<"-1\n";
	}
}
}
