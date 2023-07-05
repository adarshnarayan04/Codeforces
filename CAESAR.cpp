#include<bits/stdc++.h>
using namespace std;

int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	int t;
	cin>>t;
	while(t--)
	{
		int n;
        cin>>n;
        string a,b,c;
        cin>>a>>b>>c;
        int x=b[0]-a[0];
        // cout<<x<<"\n";
    for (int i = 0; i < n; ++i)
   {
	// c[i]+=x;
	// int y='z'+26;
	// // cout<<y<<"\n";
	// cout<<(int)c[i]<<endl;
	if (c[i]+x>'z')
	{
		c[i]=c[i]-26+x;
	}
	else if (c[i]+x<'a')
	{
		c[i]=c[i]+26+x;
	}
	else
		c[i]+=x;
   }
   cout<<c<<endl;


	}
	
	return 0;
}