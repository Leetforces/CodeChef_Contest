#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI (3.141592653589)
#define MOD 1000000007
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(0)
#define deb(x) cout<<"[ "<<#x<<" = "<<x<<"] " 


void solve(){ 
    string s;cin>>s;
    int n=s.size();
    if(n&1)
    {
        cout<<"-1"<<"\n";
        return;
    }
    int zero=0,one=0;
    vector<pair<char,int>> v;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0') zero++;
        else one++;
       if(v.empty()==false && v.back().first!=s[i])
       {
           v.pop_back();
       }
       else{
           v.push_back({s[i],i});
       }
    }
    
    if(zero==n || one==n)
    {
        cout<<"-1"<<"\n";
    }
    else
    {
        cout<<v.size()/2<<"\n";
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
