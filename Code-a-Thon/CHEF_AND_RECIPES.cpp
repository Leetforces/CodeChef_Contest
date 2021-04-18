/*
    Author: Manish Kumar
    Username: manicodebits
    Created: 10:05:11 18-04-2021
*/


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI 3.141592653589
#define MOD 1000000007
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(0)
#define deb(x) cout<<"[ "<<#x<<" = "<<x<<"] " 


void solve(){ 
    int n;cin>>n;

    int mn=1,mx=4*(n-1)+1;
    int value=(mx-mn)/2;
    int initial=value%4;
    int cnt= (value-initial)/4+1;
    int ans=cnt*(2*initial+(cnt-1)*4)/2;
    
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
