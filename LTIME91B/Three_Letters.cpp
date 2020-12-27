/*
    Author: Manish Kumar
    Username: manicodebits
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI (3.141592653589)
#define MOD 1000000007
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(0)
#define deb(x) cout<<"[ "<<#x<<" = "<<x<<"] " 


void solve(){ 
    string s;cin>>s;
    int freq[26]={0};
    for(auto ch:s)
    {
        freq[ch-'a']++;
    }
    int count=0;
    for(int i=0;i<26;i++)
    {
      count+=freq[i]/2;
    }
    int n=s.size();
    cout<<min(count,n/3)<<"\n";
}


signed main(){
FAST_IO;
int t=1;
cin>>t;
while(t--)
solve();
return 0;
}
