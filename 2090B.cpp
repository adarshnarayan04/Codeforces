#include<bits/stdc++.h>
using namespace std;


void solve(){
  int n,m;
  cin>>n>>m;

  vector<vector<int>>a(n,vector<int>(m));
  for(int i=0; i<n; i++){
    string s;
    cin>>s;
    for(int j=0; j<m; j++)
    a[i][j]=(s[j]-'0');
  }

  
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      if(a[i][j]==191){
        
        int row=i;
        int col=j;
        int check=0;
        //check previous rows

        for(int u = 0; u < row; u++){

    
        if(a[u][col] == 0){

        check++;
        break;
        }
       }
        //check previous cols
        for(int q=0; q<col; q++){
          if(a[row][q]==0){

            check++;
            break;
          }
        }
        
        if(check>=2) {
          cout<<"NO\n"; return;
        }
      }
    }
  }
  cout<<"YES\n";
  return;
}
signed main(){
  int test; cin>>test; while(test--) solve();
}