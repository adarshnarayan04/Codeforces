#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debuggingh.h"
#else
# define debug(x...)
#endif

#define ll long long

int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
vector<string> s={"i", "a", "at", "in", "sat", "sin", "sing", "stat", "state", "sting", "string", "estate", "restate", "restated", "restarted", "resharpen", "staring", "starling"};
sort(s.begin(),s.end(),[](string a,string b){ return a.size()<b.size();});
         int n=s.size();
        vector<int> dp(n,1);
        int maxi=-1,maxind=-1;
        string word;
auto compare=[&](string a,string b)
        {
            if(a.size()!=b.size()+1) return false;
            int i=0,j=0;
            while(i<a.size())
            {
                if(j<b.size()&&a[i]==b[j])
                {
                    i++;
                    j++;
                }
                else
                {
                    i++;// a has extra letter (ex dbca bca --> so i++ should happen)
                }
            }
            if(i==a.size()&& j==b.size()) return true;
            else return false;

        };
        for(int i=0;i<n;i++)
        {
            for(int prev=i-1;prev>=0;prev--)
            {
                if(compare(s[i],s[prev]))
                {
                    dp[i]=max(dp[i],dp[prev]+1);
                   
                }

            }
            if(dp[i]>maxi){
                maxi=dp[i];
                word=s[i];
                
            }
        }
        cout<<word;
    
    
 
 
    
 return 0;
}