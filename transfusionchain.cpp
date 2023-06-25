#include<bits/stdc++.h>
using namespace std;

int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x[5];
        x[1]=0;x[2]=0;x[3]=0;x[4]=0;
        
        string A="A";
        string B="B";
        string AB="AB";
        string O="O";
        for (int i = 0; i < n; ++i)
        {
            string j;        
            cin>>j;          
            
            if (j==A)
            {
                x[1]++;
            }
            else if (j==B)
            {
                x[2]++;
            }
            else if (j==AB)
            {
                x[3]++;
            }
            else if (j==O)
            {
                x[4]++;
            }
            
        }
        int c=x[4];
        // if(x[1]==1)
        // {
        //     c+=x[2]+x[3];
        // }
        // if(x[2]==1)
        // {
        //     c+=x[1]+x[3];
        // }
        if (x[1]>=x[2])
        {
            c+=x[1]+x[3];
        }
        else
        {
            c+=x[2]+x[3];
        }
        cout<<c<<"\n";
        
    }
    return 0;
}