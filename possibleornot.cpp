#include<bits/stdc++.h>
using namespace std;
int check(int a)
{
	if(a%2==0)
		return 1;
	else
		return 0;
}

int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	int t;
	cin>>t;
	while(t--)
	{
		int n,b,cur=INT_MAX;//so that cur have binary representation 111111111111...
		// now we can easily take & with a[i] as taking cur & will give cur=a[i] now we can on checking
		cin>>n>>b;
		vector<int> a(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			if((a[i]&b)==b)//checking number have b(ex. 1100) binary represntation or not 
				//if has then taking & will give that b.a[i]=11100 it has b prent in it
				//therefore b&a[i]=b;
			{
		  	  cur&=a[i];
		  	  //taking & of all number with b(1100) binary repsen as if taking 2 b is achieved then 
		  	  //checking with other will not alter the result as b binary is already present in it(1100&11100=1100).
			}
	
		   
		}
		if (cur == b)
            cout << "YES" <<endl;
           else
            cout << "NO" << endl;
		
	}
	return 0;
}