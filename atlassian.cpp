#include <bits/stdc++.h>
using namespace std;

// #ifndef ONLINE_JUDGE
// #include "debuggingh.h"
// #else
// # define debug(x...)
// #endif

int main() {
// #ifndef ONLINE_JUDGE
//     freopen("Error.txt", "w", stderr);
// #endif
// int n;

vector<string> s={"i", "a", "at", "in", "sat", "sin", "sing", "stat", "state", "sting", "string", "estate", "restate", "restated", "restarted", "resharpen", "staring", "starling"};
//cout<<s.size();
unordered_set<string> checkstr;

for(auto str:s)
{
	
	checkstr.insert(str);
}
map<string,int> hashmap;

function<int(string)> findmax=[&](string curword)
{
	if(curword.size()==1) return 1;
	if(hashmap[curword]!=0) return hashmap[curword];
	int maxlen=0;
	
	for(int i=0;i<curword.size();i++)
	  {
		string newstr;
		for(int j=0;j<curword.size();j++)
		{
			if(i!=j)
			{
				newstr.push_back(curword[j]);
			}
			
		}
		//cout<<newstr<<endl;
				
		if(checkstr.find(newstr)!=checkstr.end())
		{
			maxlen=max(maxlen,1+findmax(newstr));
			
		}

		
		
	}
	//cout<<maxlen<<endl;
	return hashmap[curword]=maxlen;
	
			

	
};
string maxstr;
int maxi=0;
for(auto word:s)
{
	int value=findmax(word);
	//cout<<value;
	if(value>maxi)
	{
		maxstr=word;
		maxi=value;
	}
	
	
}
cout<<maxstr;

return 0;
}