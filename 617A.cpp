#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x,a,b,c,d,count=0;
	cin>>x;
	a=x%5;
	count+=x/5;
	if(a==4)
		count++;
	if(a==3)
		count++;
	if(a==2)
		count++;
	if(a==1)
		count++;
	cout<<count;
	return 0;
}