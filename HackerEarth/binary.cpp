#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,p;
        cin>>n>>k>>p;
        if(k!=0){
            int num[k];
            for(int i=0;i<k;i++){
                cin>>num[i];
            }
            sort(num,num+k);
            int a[n];
            int x=0;
            for(int j=1;j<=n;j++){
                if(binary_search(num,num+k,j)){
                    continue;}
                a[x]=j;
                //cout<<j<<"\n";
                x++;
            }
            if(p>x)
                cout<<"-1\n";
            else
                cout<<a[p-1]<<"\n";
        }
        else{
            cout<<p<<"\n";
        }
    }
    return 0;
}

