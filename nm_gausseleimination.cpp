#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;//number of variables
	
	double v[n][n+1];
	
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n+1; ++j)
		{
			cin>>v[i][j];
		}
	}
	cout<<"COEFFICIENT MATRIX\n";
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n+1; ++j)
		{
			cout<<v[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<endl;
	//partial pivoting
	for (int i = 0; i < n; ++i)
	{
		int max=i;
		for (int j = i+1; j < n; ++j)
		{
			if(v[j][i]>v[max][i])
			{
				max=j;
			}
		}
	    if(max!=i)
	   {
	   	for (int j = 0; j < n+1; ++j)
	   	{
	   		swap(v[max][j],v[i][j]);
	   	}
		
	   }
	   	for (int j = 0; j < n; ++j)
		{
			for(int k=0;k<n+1;k++)
			{
				cout<<v[j][k]<<"  ";
			}
			cout<<endl;
			
		}
		cout<<endl;
		
		//making zero(do it inside i loop)
		//so that next pivot happen according to latest value
		for (int j = i+1; j < n; ++j)
		{
			double fac=v[j][i]/v[i][i];//imp
			
			for (int k = 0; k < n+1; ++k)
			{
				v[j][k]-=(fac*v[i][k]);
				if(abs(v[j][k])<1e-9)
				{
					v[j][k]=0;
				}
			}
			
		}
	}
	double x[n];
	
	//BACK SUBSTIYUION
	
	for (int i = n-1; i>=0; i--)
	{
		x[i]=v[i][n];
		for (int j = 0; j<n; j++)//other value will be zero so change
		{
			if(i==j) continue;
			x[i]=x[i]-v[i][j]*x[j];
		}
		x[i]/=v[i][i];
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<x[i]<<" ";
	}
	
	return 0;


}