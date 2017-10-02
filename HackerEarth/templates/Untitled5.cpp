#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int k,long long int q;
    cin>>k;
    cin>>q;
    long long int ans[100000]={0};
    for(long long int j=0;j<k;j++){
        long long int a,b;
        cin>>a>>b;
        for(long long int i=a;i<=b;i++){
            ans[i]++;
        }
    }
    for(long long int f=0;f<q;f++){
        long long int c;
        cin>>c;
        cout<<ans[c]<<"\n";
    }
    return 0;
}

