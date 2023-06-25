#include<bits/stdc++.h>
using namespace std;
int a[10];
int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

int y;
cin>>y;
   int i;
        for (i = 0; y!=0;++i)
        {
            a[i]=y%10;
            cout<<a[i]<<endl;
            y=y/10;
            
        }
    
    return 0;
}