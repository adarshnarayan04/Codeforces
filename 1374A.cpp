#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t,x,y,n,k;
	cin>>t;
	for (int j = 0; j < t ; ++j)
	{
		cin>>x>>y>>n;
	
	
	 for (int i = n; i >=0;)
	 {
	 	int a=i%x;
	 	if(y>x)
	 	{
	 		cout<<0;
	 		break;
	 	}
		if(a==y)
		{
			cout<<i<<"\n";
			break;
		}
		else
		{
			if(a>y)
			{
				i=i-(a-y);
				cout<<i<<"\n";
			break;
			}
			else{	
				
			i=i-a-x+y;
			cout<<i<<"\n";
			break;
		  }
		}
	 }
	}
	
	return 0;
}