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
		int count=0;
		std::vector<int> v;
		if(n<10)
		{
			cout<<1<<"\n"<<n<<endl;
		}
		else
		{
			int i=0;
			while(n)
			{   
				int r=n%10;
				// cout<<r<<"\n";
				int x=pow(10,i++);
				// cout<<x<<"\n";
				int y=x*r;
				
				// cout<<y<<"\n";
				if (y>0)
				{
					v.push_back(y);
					count++;
					// cout<<count<<"\n";
				}
				
				n/=10;
				
			}
			cout<<count<<"\n";
			for (std::vector<int>::iterator it = v.end()-1; it!= v.begin()-1; --it)
			{
				cout<<*it<<" ";
			}
			cout<<"\n";
		}
	}
	return 0;
}