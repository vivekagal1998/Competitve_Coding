#include <stdio.h>
#include<algorithm>
using namespace std;
#define MOD 1000000007
long long int foo(long long int n)
{
    long long int temp=n,x=1;
    while(temp)
        x=(x*(temp%10))%MOD,temp/=10;
    return x;
}
int main()
{
    long long int x,k=0,two=0,three=0,five=0,seven=0,i,y,numsix=0,numtwo=0,numthree=0,mini,check,numsixmax,j,temp,count=1;
    scanf("%lld",&x);
    if(x<=1000000)
    {
    temp=x;
    while(temp)
        temp/=10,count*=9;
    count/=9;
    for(i=count; ; i++)
        if(foo(i)==x){printf("%lld\n",i);return 0;}
     return 0;   
    }
    while(1)
    {
        y=k*MOD + x;
        two=0,three=0,five=0,seven=0;
        while((y&1)==0 && y!=0)
            y>>=1,two++;
        while((y%3)==0 && y!=0)
            y/=3,three++;
        while((y%5)==0 && y!=0)
            y/=5,five++;
        while((y%7)==0 && y!=0)
            y/=7,seven++;
        if(y==0 || y==1)
        {
            mini=100000000000000000ll;
            numsix=0;
            numsixmax=min(two,three);
            for(numsix=0; numsix<=numsixmax; numsix++)
            {
                numtwo=two-numsix;
                numthree=three-numsix;
                check=0;
                if(numtwo%3==1)
                    check=check*10ll + 2ll;
                else if(numtwo%3==2)
                    check=check*10ll + 4ll;
                for(j=0; j<(numtwo/3); j++)
                    check=check*10ll + 8ll;
                if(numthree%2==1)
                    check=check*10ll + 3ll;
                for(j=0; j<(numthree/2); j++)
                    check=check*10ll + 9ll;
                for(j=0; j<numsix; j++)
                    check=check*10ll + 6ll;
                if(check<mini)mini=check;
            }
            if(check!=0)
            printf("%lld",check);
            for(i=0; i<five; i++)
                putchar('5');
            for(i=0; i<seven; i++)
                putchar('7');
            break;
        }
        k++;
    }
    return 0;
}