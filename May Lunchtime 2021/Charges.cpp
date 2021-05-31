/*
    Author: Manish Kumar
    Username: manicodebits
  Created: 20:18:39 31-05-2021
*/


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI 3.141592653589
#define MOD 1000000007
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(0)
#define deb(x) cout<<"[ "<<#x<<" = "<<x<<"] " 


void solve(){ 
    int n,k;cin>>n>>k;
    string s;cin>>s;
    
    int ans=0;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]) ans+=2;
        else ans++;
    }

    while(k--){
        int index;cin>>index;
        index--;
        if(index-1>=0 ){
            if(s[index]==s[index-1])
            ans--;
            else ans++;
        }
        if(index+1<n ){
            if(s[index]==s[index+1])
            ans--;
            else ans++;
        }
        

        if(s[index]=='0') s[index]='1';
        else s[index]='0';
       cout<<ans<<"\n";
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
