#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
unsigned long long sum[N];
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);


    int n;
    cin>>n;
    unsigned long long a[n+1],b[n+1];
    a[0]=0;
    b[0]=0;
    map<int,int> mm;
    for (int i = 1; i <= n; ++i)
    {
        cin>>a[i];
        mm[a[i]]+=i;
    }
    for (int i = 1; i <= n; ++i)
    {
        b[i]=a[i];
    }
    sort(b,b+n+1);
    for (int i = 1; i <=n; ++i)
    {
        sum[i]=sum[i-1]+a[i];
    }
    int q;
    cin>>q;
    for (int i = 0; i < q; ++i)
    {
        int type,l,m,k;
        cin>>type;
        if(type==1)
        {
            cin>>l>>m;
            cout<<sum[m]-sum[l-1]<<"\n";
        }
        else
        {
            cin>>k;
            int x;
            x=b[k];
            auto it=mm.find(x);
            cout<<(*it).second<<"\n";
            // for (int i = 0; i <= n; ++i)
            // {
            //         if (a[i]==x)
            //         {
            //             cout<<i<<"\n";
            //             break;
            //         }
            // }
            
        }
        
    }
    return 0;
}