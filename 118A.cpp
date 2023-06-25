#include<bits/stdc++.h>
using namespace std;

int main()
{	
	string s,a="",d=".";
	cin>>s;
	int x=s.size();
	int c=0,i=0;
	string b="aoyeui";

	for (i; i < x; i++)
	{
		if ((int)s[i]<97)
		{
			s[i]=s[i]+32;
			
		}
		for (int j= 0; j<b.size();j++)
		{
			
		   if (s[i]==b[j])
		   {
			a=a+"";
			c++;
			break;
		   }
	    }
	    if (c==0)
	    {
	    	a=a+d+s[i];
	    	
	    }
	    c=0;
	}
	cout<<a;
	return 0;
	// string s="A";
	// s[0]=s[0]+32;
	// cout<<s;
}