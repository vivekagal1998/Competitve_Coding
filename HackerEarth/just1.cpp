#include <iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int m;
    cin>>m;
    int a[m];
    int i;
    for(i=0;i<m;i++){
        cin>>a[m];
    }
    for(int y=0;y<m;y++){
        cout<<a[y]<<"\n";
    }
    int diff=a[0]-a[1];
    cout<<diff<<"\n";
    for (int x=0; x<m-1; x++){
	    for (int j=x+1; j<m; j++){
	    	if ((abs(a[x] - a[j])) < diff){
				diff = abs(a[x] - a[j]);
	    	}
	    }
    }
    for(int k=2;k<=diff;k++){
        if(diff%k==0){
            cout<<k<<" ";
        }
    }
    return 0;
}

