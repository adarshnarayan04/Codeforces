#include<bits/stdc++.h>
using namespace std;

long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	int t;
	cin>>t;
	while(t--)
	{
		
		
		int a,n;
		cin>>a>>n;
		int arr[n];
		map<unsigned long long,pair<int,int>> v; 
		for (int i = 0; i < n; ++i)
		{
			arr[i]=a+i;
		}
		for (int i = 0; i < n-1; ++i)
		{
			for (int j = i+1; j < n; ++j)
			{
				unsigned long long x=lcm(arr[i],arr[j]);
				v.insert({x,{arr[i],arr[j]}});
			}
		}
		auto it=v.begin();
		cout<<((*it).second).first<<" "<<((*it).second).second<<"\n";
			
	}
	return 0;
}