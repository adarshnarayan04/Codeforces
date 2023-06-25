#include<bits/stdc++.h>
using namespace std;

int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	int x;	
	cin>>x;
	int b=x;
	double a,s=0;
	while(b--)
	{
		cin>>a;
		s+=a;	
	}
	cout<<s/x;
	return 0;
}