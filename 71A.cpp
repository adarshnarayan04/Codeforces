#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	for (int i = 0; i < n; ++i)
	{
		string a;
	    cin>>a;
	    int x=a.size();
		
	    if (x>10)
	    {
		cout<<a[0]<<x-2<<a[x-1]<<endl;
	    }
	    else
		cout<<a<<endl;
    }
	return 0;
}