#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x,a=0,b=0,c=0;
	cin>>x;
	int arr[x];
	int count=0;
	for (int i = 0; i < x; ++i)
	{
		cin>>arr[i];
		if(arr[i]==4)
			count+=1;
	}
	for (int i = 0; i < x; ++i)
	{
		if(arr[i]==3)
			a++;
		else if(arr[i]==2)
			b++;
		else if(arr[i]==1)
			c++;
		
	}
	if (a<=c)
	{
		count+=a;
		c=c-a;
		a=0;
	}
	if (a>c)
	{
		count+=c;
		a=a-c;
		c=0;
		count+=a;
	}
	if (b%2==0)
	{
		count+=b/2;
		b=0;
	}
	if (b%2!=0)
	{
		count+=b/2;
		int y=1;//y=b%a
		if (y<=c)
	   {
		count=count+y;
		if(c%2==0){
		c=c-2;
	    }
		else
			c=c-1;
		y=0;
	   }
	   if (y>c)//means c=0 as y=1
	   {
		count=count+y;
		c=0;
	   }
	}
	if(c!=0)
	{
		int z=c%4;
		if (z==0)
		{
			count=count+c/4;
			c=0;
		}
		if(z!=0)
		{
			count=count+c/4;
			count++;
		}
	}
	cout<<count;
	
	
	return 0;
}