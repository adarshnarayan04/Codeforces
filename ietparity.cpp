#include <bits/stdc++.h>
using namespace std;
void hi()
{
     int n;
    cin>>n;
    vector<int> v,o,e;
    if (n==1)
    {
        cout<<"YES"<<endl;
        return;
    }
    
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int a=v[0]%2;
    int b=v[1]%2;
    for (int i = 0; i < n; i+=2)
    {
        if (v[i]%2==a)
        {
            o.push_back(v[i]);
        }
        else{
            cout<<"NO"<<endl;
            return;

        }
        
    }
    for (int i = 1; i < n; i+=2)
    {
        if (v[i]%2==b)
        {
            e.push_back(v[i]);
        }
        else{
            cout<<"NO"<<endl;
            return;

        }
        
    }
    sort(o.begin(),o.end());
    sort(e.begin(),e.end());
    int z=min(o.size(),e.size());
    for (int i = 0; i < z; i++)
    {
        if (o[i]>e[i])
        {
           cout<<"NO"<<endl;
           return;
        }
        
    }
    cout<<"YES"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        hi();
    


    }
    

    
}