#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI (3.141592653589)
#define MOD 1000000007
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(0)
#define deb(x) cout<<"[ "<<#x<<" = "<<x<<"] " 


void solve(){ 
    int n,m;cin>>n>>m;
    int gcd;cin>>gcd;

 
    for(int i=1;i<m;i++)
    {
        int temp;cin>>temp;
        gcd=__gcd(gcd,temp);
    
    }

    if(gcd<=n){
    cout<<(n-gcd)<<"\n";
    }
    else{
      int mxfactor=1;
      for(int i=1;i*i<=gcd;i++)
      {
          if(gcd%i==0)
          {
              if(i<=n)
              mxfactor=max(mxfactor,i);
              if(gcd/i<=n)
              mxfactor=max(mxfactor,gcd/i);
          }
      }
      cout<<n-mxfactor<<"\n";
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
