#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,count=0,b=1;
	cin>>n;
	string x;
	cin>>x;
	std::string::iterator a;
	std::string::iterator c;
	c=x.begin();
	for (a=x.begin()+1; b< x.length();++a)
	{
		if (*a==*c)
		{
			count=count+1;
			
		}
		b++;
		c++;
	}
	cout<<count;
	return 0;
}	