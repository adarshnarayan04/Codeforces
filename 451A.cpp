#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i=1;
	cin>>n>>m;
	for (i; n!=0&&m!=0; ++i)
	{
		n--;
		m--;
	}
	if(i%2!=0)
	{
	  cout<<"Malvika";
	}
	else
		cout<<"Akshat";
	

	return 0;
}