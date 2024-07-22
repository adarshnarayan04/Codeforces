#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	double x[n],y[n];
	
	for (int i = 0; i < n; ++i)
	{
		cin>>x[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>y[i];
	}
	double z;//at which to find
	cin>>z;
	double ans=y[0];
	
	vector<vector<double>> diff(n);
	
	for (int i = 0; i < n; ++i)
	{
		diff[0].push_back(y[i]);
	}
	
	double t=1;
	//we have added y[0](diff[0]) thererofore i=1
	for (int i = 1; i < n; ++i)//n-1 is max dely that can exsist
	{
		t*=(z-x[i-1]);//as i=1 start
		
		for (int j = 0; j < diff[i-1].size()-1; ++j)//as n-1 terms will be formed
		{
			double dely=(diff[i-1][j+1]-diff[i-1][j])/(x[j+i]-x[j]);//as 1 dely means 1 diffrence between x
			diff[i].push_back(dely);

		}
		ans+=(diff[i][0]*t);
	}
	
	cout<<"ans:"<<ans;
	
	return 0;
}