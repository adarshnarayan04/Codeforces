#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s,a,b,c,e="",f="";
	string d="WUB";
	cin>>s;
	int count=0;
	int x=s.size();
	for (int i = 0; i < x;)
	{
		for (int j = 0; j < 3; ++j)
		{
			a=s[i+j];
			e=e+s[i+j];
			
		}
		if(e==d)
		{
				i=i+3;
				e="";
				if(count==1)// to remove the extra spaces which come in output
				{
				f=f+" ";
				count=0;
			    }
		}
			else
			{
				f=f+s[i];
				i++;
				e="";
				count=1;
			}
	}
	cout<<f;
	return 0;
}