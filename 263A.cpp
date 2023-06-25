#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,l,m;
	int arr[5][5];
	for (int a = 0; a < 5; ++a)
	{
		for (int b = 0; b < 5; ++b)
		{
			cin>>arr[a][b];
		}
	}
	for (int x = 0; x < 5; ++x)
	{
		for (int y = 0; y < 5; ++y)
		{		
			if (arr[x][y]==1)
			{
				i=2-x;
				j=2-y;
				l=abs(i);
				m=abs(j);
				
			}
		}
	}
	cout<<l+m;
	
	return 0;
}