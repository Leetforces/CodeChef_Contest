/*
    Author: Manish Kumar
    Username: manicodebits
  Created: 20:34:34 31-05-2021
*/


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI 3.141592653589
#define MOD 1000000007
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(0)
#define deb(x) cout<<"[ "<<#x<<" = "<<x<<"] " 



const int N=10000000;


void solve(){ 
  
    vector<bool > isPrime(N+1,false);
    vector<int> dp(N+1,0);
    
    for(int i=2;i<=N;i++){

       if(isPrime[i]==false){
              
           dp[i]+=1;
           if(2*i<=N)  dp[2*i]-=1;

           for(int j=i;j<=N;j+=i){
                isPrime[j]=true;
           }
       }

    }

    for(int i=2;i<=N;i++){
        dp[i]+=dp[i-1];
    }

    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        if(n<=3)
        cout<<dp[n]<<"\n";
        else
        cout<<dp[n]+1<<"\n";
    }
    
}


signed main(){
FAST_IO;
solve();
return 0;
}
