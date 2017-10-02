#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<n;
        int ans=0;
        for(int i=0;i<=sqrt(n);i++){
            if(i==sqrt(n) && n%i==0){
                ans+=i;
            }
            if(n%i==0){
                ans+=(i+(n/i));
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}

