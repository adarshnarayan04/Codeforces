#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of variables:\n";
    cin>>n;
    double v[n][n+1];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the coefficients of "<<i<<"th equation\n";
        for(int j=0;j<n+1;j++)
        {
            cin>>v[i][j];
        }
    }
    cout<<"Coefficient Matrix\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    int i=0;
    while(i<n)
    {
        int maxi=i;
        int max=0;
        int sum=0;
        for(int j=0;j<n;j++)
        {
            sum+=v[i][j];
            if(v[i][j]>max)
            {
                max=abs(v[i][j]);
                maxi=j;
            }
        }
        if(max>sum-max)//to check it stattify dominance property
        {
            if(maxi!=i)
            {
                for(int j=0;j<n+1;j++)
                {
                    swap(v[i][j],v[maxi][j]);
                }
            }
            else//means in correct position
            {
                i++;
            }
        }
        else{
            cout<<"Method does not satisfy Diagonal dominance rule\n";
            return 0;
        }
    }
    cout<<"Cofficient Matrix after rearranging\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    double sol[n];
    cout<<"Enter the initial value\n";
    for(int i=0;i<n;i++)
    {
        cin>>sol[i];
    }
    cout<<"Enter the number of iterations\n";
    int t;
    cin>>t;
    int a=t;
    while(t--)
    {
        for(int i=0;i<n;i++)
        {
            double temp=v[i][n];
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                temp-=(sol[j]*v[i][j]);
            }
            temp/=v[i][i];
            sol[i]=temp;
        }
        cout<<"Solution by Gauss Siedel after"<<a-t<<endl;
        for(int i=0;i<n;i++)
       {
        cout<<sol[i]<<" ";
       }
       cout<<endl;
    }
    cout<<"Solution bun Gauss Siedel\n";
    for(int i=0;i<n;i++)
    {
        cout<<sol[i]<<" ";
    }
    return 0;
}
