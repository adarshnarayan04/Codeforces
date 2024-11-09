#include <bits/stdc++.h>
using namespace std;

string keymake(string poly)
{
    
    map<int,bool> present;
    int n=poly.size();
    string num;
    int i=0;
    while(i<n){
        if(poly[i]=='^')
        {
            i++;
            while(i<n&&poly[i]>='0'&&poly[i]<='9')
            {
                num.push_back(poly[i]);
                i++;
            }
        }
        i++;
  
        if(num.size()!=0)
        {
            int power=stoi(num);
            present[power]=true;
            num="";          
        }       
    }
    auto it=present.end();
    it--;
    int degree=(*it).first;
    cout<<"deg:"<<degree<<endl;
    string s=string(degree+1,'0');// as 0-degree so len will be degree+1
    cout<<s.size()<<endl;
    for(auto &x:present)
    {
      cout<<x.first<<endl;
      s[x.first]='1';
    }
    reverse(s.begin(),s.end());// as normally s[0] is in beginning
    return s;
  
}
int main() {
    string poly;
    poly="x^11+x^7+x^0";
    cout<<poly<<endl;
    
    string key=keymake(poly);
    cout<<key;
    
    return 0;
}