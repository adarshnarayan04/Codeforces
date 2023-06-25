#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
const int M=1e9+7;
int dif[N];

int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	int t;
	cin>>t;
	while(t--)
	{
		int n,k,x=0;
		long long mult=1;
		vector <int> a;
		a.push_back(0);
		cin>>n>>k;
		string s;
		cin>>s;
		for (int i = 0; i < n; ++i)
		{
			if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u')
			{
				a.push_back(i);
				x++;
			}
		}
		for (int i = 2; i < a.size(); ++i)
		{
			dif[i]=a[i]-a[i-1]-1;
		}
		// cout<<dif[2];
		x/=k;//number of parts to divide
		x--;//no of line needeed to divide in parts
		int p=0;
		for (int i = k; p < x; i+=k)
		{
			mult=(mult%M)*(dif[i+1]+1)%M;
			p++;
		}
		cout<<mult<<"\n";
		
	}
	return 0;
}