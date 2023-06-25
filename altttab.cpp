#include<bits/stdc++.h>
using namespace std;

int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	int t;
	cin>>t;
	string s[t];
	for (int i = 0; i < t; ++i)
	{
		cin>>s[i];
		for (int j = i-1; j >=0; --j)
		{
			if (s[i]==s[j])
			{
				s[j].erase();
				break;
			}
		}
	}
	for (int i = t-1; i>=0; --i)
	{
		int x=s[i].size();
		
		if(x>0)
		{
			cout<<s[i][x-2]<<s[i][x-1];
		}
	}
	//hi
	// stack<string> s;
	// for (int i = 0; i < t; ++i)
	// {
	// 	string x;
	// 	cin>>x;
	// 	s.push(x);
	// }
	// // for ( auto itr = s.begin(); itr !=s.end();itr++)
	// // {
	// // 	int a=(*itr).size();
    // //     cout << (*itr)[a-2]<<(*itr)[a-1];
	// // }
	// while (!s.empty()) 
	// {
    //     string x=s.top();
    //     int y=x.size();
    //     cout<<x[y-2]<<x[y-1];
    //     s.pop();
    // }

 
	return 0;
}	