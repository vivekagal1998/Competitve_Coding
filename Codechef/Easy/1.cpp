#include <bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for (ll i = a; i <b ; ++i)

using namespace std;

/*string ip()
{
    string i="";
    int temp=getchar_unlocked();
    while(temp<'a'||temp>'z')
        temp=getchar_unlocked();
    while(temp>='a'&&temp<='z')
    {
        i+=(char)temp;
        temp=getchar_unlocked();
    }
    return i;
}

inline long long inp(){
        long long n = 0;
        char c = getchar_unlocked();
        while(c<'0'|| c>'9') c = getchar_unlocked();
        while(c>='0'&&c<='9')
        {
            n =(n<<3)+(n<<1)+c - '0';
            c = getchar_unlocked();
        }
        return n;
}*/

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	float f;
	cin>>n>>f;
	int flag=0;
	if (n%5!=0)
	{
		flag=1;
	}
	else{
		if (n+0.5<f)
		{
			flag=0;
		}
		else{
			flag=1;
		}
	}
	if (flag==0)
	{	
		std::cout << std::fixed << std::setprecision(2)<<(f-n-0.5);
	}
	else{
		std::cout << std::fixed << std::setprecision(2)<<f;
	}
	return 0;
}
