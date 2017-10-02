#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int k,count=1;
    cin>>k;
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
            count++;
        }
        if(count==k && a[i]!=a[i+1]){
            cout<<a[i];
            break;
        }
    }
    return 0;
}

