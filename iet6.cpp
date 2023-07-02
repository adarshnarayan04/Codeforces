#include<bits/stdc++.h>
using namespace std;

unsigned long long digitsum(unsigned long long a)
{
	unsigned long long sum=0;
	while(a)
	{
		sum+=a%10;
		a/=10;
	}
	return sum;
}
int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	int t;
	cin>>t;
	while(t--)
	{
		// unsigned long long n,s,x;
		// cin>>n>>s;
		// while(digitsum(n)>s)
		// {
		// 	// if (s>=digitsum(n))
		// 	// {
		// 	//   break;
		// 	// }
		// 	n++;
		// }
		// cout<<n-x<<endl;
		unsigned long long n,s,x;
		cin>>n>>s;
		while(digitsum(n)>s)
		{
			int x=(n/10)%10;
			if (x==0)
			{
				/* code */
			}
		
			n++;
		}
		
	}
	return 0;
}