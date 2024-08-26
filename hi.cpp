#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long n;
    cin>>n;
    long long a,b;
    cin>>a>>b;

    long long ans=n/a;
    long long g=__gcd(a,b);
    long long lcm=(a*b)/g;
    ans+=(n/b);
    ans-=(n/(lcm));

    cout<<ans;

    return 0;
}
