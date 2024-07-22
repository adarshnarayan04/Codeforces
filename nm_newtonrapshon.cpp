
#include<bits/stdc++.h>
using namespace std;
double e=5e-7;
double f(double x)
{
    return 230*x*x*x*x+18*x*x*x+9*x*x-221*x-9;
}
double g(double x)
{
	return 230*x*x*x*4+18*3*x*x+9*2*x-221;
}
void newtonrapshon(double x)
{
    cout<<"YES\n";

    //in precision use do while loop
 
    do
    {
    	if(g(x)==0) return;
    	x=x-f(x)/g(x);

    } 
    while(abs(f(x))>e);
    
    cout<<"ans:"<<x<<endl;
    
    


}

int main()
{
    newtonrapshon(0);
    newtonrapshon(1);
    return 0;
}