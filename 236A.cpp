#include<bits/stdc++.h>
using namespace std;

int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	string a;
	cin>>a;
	int x=a.size();
	for (int i = 0; i < a.size(); ++i)
	{
		for (int j = i+1; j < a.size(); ++j)
		{
			if (a[i]==a[j])
			{
				x--;
				break;

			}
		}
	}
	if (x%2==0)
		{
			cout<<"CHAT WITH HER!";
			
		}
	else
		cout<<"IGNORE HIM!";
		
	return 0;
}