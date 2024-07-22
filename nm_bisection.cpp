#include<bits/stdc++.h>
using namespace std;

double f(double x)
{
    return -0.5*x*x+2.5*x+4.5;
}

void bisection(double a,double b)
{
    cout<<"YES\n";
    if(f(a)*f(b)>=0)
    {
        return;
    }
    else
    {
       cout<<"right interval\n";
    }
    double mid;
    for (int i = 0; i < 3; ++i)
    {
        mid=(a+b)/2;
        
        if(f(mid)==0)break;
        else if(f(a)*f(mid)<0)
        {
            b=mid;
        }
        else
        {
            a=mid;
        }
        
    }
    cout<<"ans:"<<mid;
}
int main()
{
    bisection(5,10);
    return 0;
}