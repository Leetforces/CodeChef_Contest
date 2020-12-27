#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI (3.141592653589)
#define MOD 1000000007
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(0)
#define deb(x) cout<<"[ "<<#x<<" = "<<x<<"] " 


void solve(){ 
    int x,y,k,n;cin>>x>>y>>k>>n;
    int dist=abs(x-y);
    if(dist%k !=0)
    {
        cout<<"No"<<"\n";
        return;
    }

    int steps=dist/k;
    if(steps%2==0)
    {
        cout<<"Yes"<<"\n";
    }
    else
    {
        cout<<"No"<<"\n";
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
