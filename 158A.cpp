#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,x;
	cin>>n>>k;
	int arr[n];
	int count=0;
	if (n>=1&&n<=50&&k>=1&&k<=50)
	{
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		x=arr[k-1];
		for (int a = 0; a < n; a=a+1)
		{
			if (arr[a]>0&&arr[a]>=x)
			{
				count=count+1;
			}
		}
		cout<<count;
	}
	return 0;
}