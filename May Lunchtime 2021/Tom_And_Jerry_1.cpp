


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI 3.141592653589
#define MOD 1000000007
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(0)
#define deb(x) cout<<"[ "<<#x<<" = "<<x<<"] " 


void solve(){ 
    int a,b,c,d,k;cin>>a>>b>>c>>d>>k;

    int dist= abs(a-c)+abs(b-d);
    
    if(dist==k){
        cout<<"YES\n";
    }
    else if(dist<k){
        int temp= abs(dist-k);
        if(temp&1){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
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
