#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	std::set<int>::iterator it;
	while(t--){
		int n;
		cin>>n;
		int flag=0;
		int i,j;
		int a[n];
		set<int> s;
		int size = 0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==7){
				size=i;
			}
			s.insert(a[i]);
		}
		
		int counter=0;
		for (it=s.begin(); it!=s.end(); ++it){
			counter++;
    		if(*it == counter){
    			continue;
			}
			else{
				flag=1;
				break;
			}
		}
 		if(size!=0){
			for(i=0,j=n-1;i<=size;i++,j--){
				if(a[i]==a[j]){
					continue;
				}
				else{
					flag=1;
					break;
				}
			}
		}
		else{
			flag=1;
		}
			if(flag==0){
				cout<<"yes\n";
			}
			else{
				cout<<"no\n";
			}
	}
}
