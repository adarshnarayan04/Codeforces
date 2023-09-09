#include <bits/stdc++.h>
using namespace std;

typedef long long   ll;
#define umap        unordered_map
#define speed       ios_base::sync_with_stdio(false); cin.tie(NULL)
#define all(x)      x.begin(), x.end()
#define pb          push_back

int main()
{
    speed;
    int t;
    cin>>t;
    while(t--)
    {
      ll l,r;
      cin>>l>>r;
      bool flag(false);
      int found(0);
      for (int i = 1; i <r; i++)
      {
         for (int j = r-i; j >=l-i; j--)
         {
            if (__gcd(i,j)!=1 && found==0 && i>0 &&j>0)
            {
               cout<<i<<" "<<j<<endl;flag=true;found=1;
               continue;
            }
         }
      }
      if (!flag)
      {
         cout<<"-1";
      }
      cout<<endl;
    }
    return 0;
}