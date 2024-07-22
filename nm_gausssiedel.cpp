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
	
	//satidfying dominance property
	int i=0;
	while(i<n)
	{
		int maxi=n;
		int max=0;
		int sum=0;
		for (int j = 0; j < n; ++j)
		{
			if(abs(v[i][j])>abs(max))
			{
				max=abs(v[i][j]);
				maxi=j;
			}
			sum+=abs(v[i][j]);
		}
		if(abs(max)>abs(sum-max))//dominance staisfied
		{
			if(maxi!=i)//means not in correct poaition
			{
				for (int j = 0; j < n+1; ++j)
				{
					swap(v[i][j],v[maxi][j]);
				}
				//no i++ here to that it check again (next time else will work)
			}
			else
			{
				i++;
			}

		}
	   else
		{
			cout<<"Dominace Property not satisfied\n";
			return 0;
		}
			

	
	}
	cout<<"COEFFICIENT MATRIX after dominace\n";
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n+1; ++j)
		{
			cout<<v[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<endl;
	double sol[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>sol[i];//intilal value
	}
	int t;// number of iteration
	cin>>t;
	while(t--)
	{
		for (int i = 0; i < n; ++i)//same as backsubsitution
		{
			double temp=v[i][n];
			for (int j = 0; j < n; ++j)
			{
				if(i==j)continue;
				temp-=(sol[j]*v[i][j]);
			}
			temp/=v[i][i];
			sol[i]=temp;
		}
		for (int i = 0; i < n; ++i)
		{
			cout<<sol[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}