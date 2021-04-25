/*
    Author: Manish Kumar
    Username: manicodebits
  Created: 16:15:19 25-04-2021
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
    int a,b;cin>>a>>b;

    int theifmin=(n-x)+(m-y);
    int policemin=max(n-a,m-b);
   
    if(theifmin<=policemin){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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
