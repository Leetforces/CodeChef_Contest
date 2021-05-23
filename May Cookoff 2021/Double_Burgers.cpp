/*
    Author: Manish Kumar
    Username: manicodebits
  Created: 22:45:24 23-05-2021
*/


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI 3.141592653589
#define MOD 1000000007
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(0)
#define deb(x) cout<<"[ "<<#x<<" = "<<x<<"] " 

void solve(){ 
    int x,y;cin>>x>>y;
    
    
    if((y%x)!=0) {
        cout<<"-1\n";
        return;
    }

    y/=x;

    long long ans=0;
    for(int len=61;len>=1;len--){
      
      long long value=((long long) 1<<len)-1;

      if(value<=y){
          y-=value;   //subtract the bigger value sum

          ans+=(len)+1; // streaks +breaks
      }
       
    }
    
    if(y==0){
        cout<<ans-1<<"\n";   //remove adding last break
    }
    else {
        cout<<"-1\n";
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
