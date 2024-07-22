#include <bits/stdc++.h>

using namespace std;

int main()
{
int n;
    //cout<<"Enter the number of variables:";
    cin>>n;
    double v[n][n+1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            cin>>v[i][j];
        }
    }
    

    for(int i=0;i<n;i++)
    {
        
        
        int max=i;
        for(int j=i+1;j<n;j++)
        {
           if(v[j][i]>v[max][i])
           {
               max=j;
           }
        }
        if(max!=i)//partial pivoting
        {
            for(int j=0;j<n+1;j++)
            {
                swap(v[max][j],v[i][j]);
            }
        }
  
        for(int i=0;i<n;i++)
       {
        for(int j=0;j<n+1;j++)
        {
            cout<<v[i][j]<<"    ";
        }
         cout<<endl;
       }
       cout<<endl;

        for(int j=i+1;j<n;j++)
        {
            double fac=v[j][i]/v[i][i];
            cout<<"fac:"<<fac<<endl;
            for(int k=0;k<n+1;k++)
            {
                v[j][k]=v[j][k]-fac*v[i][k];
                if(abs(v[j][k])<1e-9)
                {
                    v[j][k]=0;
                }
            }
        }


    }

    vector<double>x(n);// answer array
    
   
     for(int i=n-1;i>=0;i--)//back subsitution
     {
          x[i] = v[i][n];
          for(int j=i+1;j<n;j++)
          {
                x[i] = x[i] - v[i][j]*x[j];
          }
          x[i] = x[i]/v[i][i];
     }
     for (int i = 0; i < n; ++i)
     {
        cout<<x[i]<<" ";
     }
     cout<<endl;

    for(int i=n-1;i>=0;i--)//converting to normal form
    {
        if(v[i][i]!=1)
        {
            
            v[i][n]/=v[i][i];
            v[i][i]=1;
           
        }
        for(int j=i-1;j>=0;j--)
        {
            
            v[j][n]=v[j][n]-v[j][i]*v[i][n];
            v[j][i]=0;
            

        }
    }
    for(int i=0;i<n;i++)//nor mal form
    {
        for(int j=0;j<n+1;j++)
        {
            cout<<v[i][j]<<"    ";
        }
        cout<<endl;
    }
    for (int i = 0; i < n; ++i)// solution by gauss jordan
    {
        cout<<v[i][n]<<" ";
    }

    return 0;
}