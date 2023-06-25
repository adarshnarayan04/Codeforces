#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int spam[N];
int main() {
    int n;
    int counter=0;
    cin >> n;

    string s[n];
    string x[n];


    for (int i = 0; i < n; ++i) {
        cin >> s[i];

        // if (spam[i]) {
        //     continue;
        // }
        for (int j = i - 1; j >= 0; j--)
         {
            if (s[i] == s[j]) 
            {
                spam[i] = 1;
                spam[j] = 1;
                break;
            }
        }
    }
    int y=0;
    for (int i = 0; i < n; ++i) 
    {
        if (spam[i]==0)
         {
            counter++;
            x[y]=s[i];
            y++;
        }
    }
    sort(x,x+y);
    if (counter==0)
    {
        cout<<-1;
    }
    else
    {
      for (int i = 0; i < y; ++i) 
     {
        
            cout << x[i] <<"\n";
        
     }
    }
    

    return 0;
}