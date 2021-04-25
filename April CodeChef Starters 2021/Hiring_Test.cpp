/*
    Author: Manish Kumar
    Username: manicodebits
  Created: 16:06:23 25-04-2021
*/


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI 3.141592653589
#define MOD 1000000007
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(0)
#define deb(x) cout<<"[ "<<#x<<" = "<<x<<"] " 


void solve(){ 
    int n,m;cin>>n>>m;
    int x,y;cin>>x>>y;
    string s[n];
    string ans="";
    for(int i=0;i<n;i++)
    {
        cin>>s[i];

        int full=0,partial=0;
        for(char ch:s[i])
        {
            if(ch=='F') full++;
            else if(ch=='P') partial++;
        }
        
        if(full>=x || (full>=x-1 && partial>= y)){
            ans+='1';
        }
        else{
            ans+='0';
        }
    }
    cout<<ans<<"\n";

    
}


signed main(){
FAST_IO;
int t=1;
cin>>t;
while(t--)
solve();
return 0;
}
