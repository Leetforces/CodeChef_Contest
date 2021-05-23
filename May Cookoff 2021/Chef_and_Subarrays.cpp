
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI 3.141592653589
#define MOD 1000000007
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(0)
#define deb(x) cout<<"[ "<<#x<<" = "<<x<<"] " 


void solve(){ 
    int n,k;cin>>n>>k;
    vector<vector<int>> arr(k);

    for(int i=0;i<n;i++){
        int temp;cin>>temp;

        arr[i%k].push_back(temp);
    }
    
    int ans=0;
    for(int i=0;i<k;i++){

        int sz= (int)arr[i].size();
        int mx=0;
        map<int,int> mp;

        for(int j=0;j<sz;j++){
            mp[arr[i][j]]++;
            mx=max(mx,mp[arr[i][j]]);
        }

       ans+=(sz-mx);
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
