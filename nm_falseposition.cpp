#include<bits/stdc++.h>
using namespace std;
double e=5e-7;//divide by 2 to given precison
double f(double x)
{
    return 230*x*x*x*x+18*x*x*x+9*x*x-221*x-9;
}

void falseposition(double a,double b)
{
    cout<<"YES\n";
    if(f(a)*f(b)>=0)
    {
         cout<<"wrong interval\n";
        return;
    }
    else
    {
       cout<<"right interval\n";
    }
    //in precision use do while loop
    double x;
    do
    {
        x=(a*f(b)-b*f(a))/(f(b)-f(a));
        if(f(x)==0)
        {
            cout<<"ans:"<<x<<endl;
            return;
        }
        if(f(a)*f(x)<0)
        {
            b=x;
        }
        else
        {
            a=x;
        }
    } 
    while(abs(f(x))>e);
    
    cout<<"ans:"<<x<<endl;
    
    


}

int main()
{
    falseposition(-1,0);
    falseposition(0,1);
    return 0;
}