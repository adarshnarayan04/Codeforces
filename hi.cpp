#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin>>s;
  
  vector<int> hash(26);
  int n=s.size();
  int x,y;
  cin>>x>>y;
  
  for (int i = 0; i < n; ++i)
  {
    hash[s[i]-'a']++;
  }
  int cost=0;
  
  if(x>y)
  {
    priority_queue< int > pq;
    for(int i=0;i<26;i++)
    {
      if(hash[i])
      pq.push(hash[i]);
    }
    
    while(pq.size()>1)
    {
      int a=pq.top();
      pq.pop();
      int b=pq.top();
      pq.pop();
      pq.push(a-b);
      cost+=(b)*y;
    }
    if(pq.size()) cost+=(pq.top()/2)*x;
    
  }
  else {
    
    
    for(int i = 0; i < 26; i++) {
        cost += (hash[i] / 2) * x;
        hash[i] %= 2;
    }
    
    int left = 0;
    for(int i = 0; i < 26; i++) {
        left += hash[i];
    }

    cost += (left / 2) * y;
    
    
  }
  cout<<cost;

  
}