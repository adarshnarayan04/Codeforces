#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	cin>>x;
	int count=0;
	int arr[x][3];
	for (int i = 0; i < x; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cin>>arr[i][j];
		}
	}
	for (int j = 0; j < 3; ++j)
	{
		for (int i = 0; i < x; ++i)
		{
			count+=arr[i][j];
		}
		if(count!=0)
		{
		cout<<"NO";
		break;
	    } 
    }	
    if (count==0)
    	{
    		cout<<"YES";
    	}	
	
	
	
	return 0;
}

