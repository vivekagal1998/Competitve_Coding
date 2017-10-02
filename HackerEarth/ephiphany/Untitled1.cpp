#include<bits/stdc++.h>
using namespace std;

int main()
{   
      ios_base::sync_with_stdio(false);
       cin.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    vector<int> v1,v2;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {

                int f=(a[i]+a[j])*a[k];
                v1.push_back(f);
                //cout<<f<<" ";
            }
        }
    }
    //cout<<"\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(a[k]==0) continue;
                int f=a[k]*(a[j]+a[i]);
                v2.push_back(f);
                //cout<<f<<" ";
            }
        }
    }
    //cout<<"\n";
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    for(int i=0;i<v1.size();i++)
    {cout<<v1[i]<<" ";
	}
	cout<<"\n";
    for(int i=0;i<v2.size();i++)
    {cout<<v2[i]<<" ";
	}
	cout<<"\n";
    int ans=0;
    for(int i=0;i<v1.size();i++)
    {
        int lo=lower_bound(v2.begin(),v2.end(),v1[i])-v2.begin();
        int high=upper_bound(v2.begin(),v2.end(),v1[i])-v2.begin();
         ans+=(high-lo);
    }
    cout<<ans<<endl;
    return 0;
}
