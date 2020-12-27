#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI (3.141592653589)
#define MOD 1000000007
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(0)
#define deb(x) cout<<"[ "<<#x<<" = "<<x<<"] " 


void solve(){ 
    int n;cin>>n;
    string s;cin>>s;
    int one=0,zero=0;
    for(char ch:s)
    {
        if(ch=='0') zero++;
        else one++;
    }
   
    if(one+(120-n)>=zero*3)
    cout<<"YES"<<"\n";
    else
    {
        cout<<"NO"<<"\n";
    }
    
}


signed main(){
FAST_IO;
int t=1;
cin>>t;
while(t--)
solve();
return 0;
}
