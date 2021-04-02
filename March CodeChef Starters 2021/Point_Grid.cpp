/*
    Author: Manish Kumar
    Username: manicodebits
    Created: 17:38:12 28-03-2021
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
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        cin>>arr[i];
        
        reverse(arr.begin(),arr.end());
        
        int ans=arr[0];
        for(int i=1;i<n;i++)
        {
        if(arr[i]>=arr[i-1])
        {
            ans+=(arr[i]-arr[i-1]+1);
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
