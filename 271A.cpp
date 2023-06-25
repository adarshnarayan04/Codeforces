#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n>=1000&&n<=9000)
	{
	 int a,b,c,d,e;
	 
        
	 for (int i = 1; e!=1; ++i)
	 {
		n=n+1;
		a=n%10;
	    b=(n/10)%10;
	    c=(n/100)%10;
	    d=(n/1000)%10;
		if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
		{
			cout<<n;
			break;
		}
	 }
	 
    } 
	return 0;
}