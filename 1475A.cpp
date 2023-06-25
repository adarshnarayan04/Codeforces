#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	unsigned long long int n,t;
	int c,x,k,y;
	cin>>t;
	for (int i = 0; i < t; i++)
	{
		cin>>n;
		c=0;
		// x=sqrt(n);
		if(n%2==0)
		{	
		 // for (int j = 2; j <= x; j+=1)
		 // {
		// 	if(n%j==0)
		// 	{
		// 		k=j;
		// 		y=n/j;
		// 		if (k%2!=0||y%2!=0)
		// 			{
		// 				cout<<"YES"<<"\n";
		// 	 	           c=1;
		// 	 	          break;
		// 			}	
			//  if(c==0)
		//  {
		// 	cout<<"NO"<<"\n";
		//  }
		// 	}
	    // }
			while(n%2==0)
			{
				n=n/2;
			}
			if(n==1)
				cout<<"NO"<<"\n";
			else
				cout<<"YES"<<"\n";
				
			 	
		}
      
		
	    else// has odd number has always itself as odd divisor
	    	cout<<"YES"<<"\n";
	}
	return 0;
}