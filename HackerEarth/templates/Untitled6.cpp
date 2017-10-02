#include<bits/stdc++.h>
#include<conio.h>
#include<math.h>
using namespace std;

float funct(float);

int main()
{
    float a,b,c,x1,x2;
    int n;

    cout<<"your interval ? "; cin>>x1>>x2;

    while(x1<=x2)
    {
        if(funct(x1)*funct(x1+0.5)<0)
        {
            n=0;
            a=x1;
            b=x1+0.5;
            do
            {
                c=(a+b)/2;
                if(funct(a)*funct(c)<0)
                    b=c;
                else
                    a=c;
                n++;
            }while(fabs(b-a)>0.000001); // threshold
            
            cout<<endl<<"The root is:  "<<c<<"     f(c) is: "<<funct(c)<<"  N:"<<n;
        }
        x1=x1+0.5;
    }
    getch();
    return 0;
}


float funct(float x)
{
    return pow(x,4)-8*x*x+15;
}
