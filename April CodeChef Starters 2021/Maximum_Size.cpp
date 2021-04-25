/*
    Author: Manish Kumar
    Username: manicodebits
  Created: 16:27:23 25-04-2021
*/


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI 3.141592653589
#define MOD 1000000007
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(0)
#define deb(x) cout<<"[ "<<#x<<" = "<<x<<"] " 


// [up,right,left,down]
int dx[4]={-1,0,0,1};
int dy[4]={0,1,-1,0};

int dfs(int i,int j,int& n,int& m,string s[]){
    if(i<0 || j<0 || i>=n || j>=m || s[i][j]!='1')
    return 0;
    
    // cell [i,j] visited
    s[i][j]='0';

    int ans=1;

    // go to all four direction
    for(int k=0;k<4;k++)
    {
        int newx= i+dx[k];
        int newy= j+dy[k];
        ans+=dfs(newx,newy,n,m,s);

    }
    return ans;


}
void solve(){ 

    //input
    int n,m;cin>>n>>m;
    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    
    vector<int> ans;

    //go on each continious '1' and store in ans 
    for(int i=0;i<n;i++) 
    for(int j=0;j<m;j++)
    {
        if(s[i][j]=='1'){
          int continious1=dfs(i,j,n,m,s);
          ans.push_back(continious1);
        }
    }
    
    // sort the vector in descending order
    sort(ans.begin(),ans.end(),greater<int>());
    int res=0;

    // take the '1' in optimal way
    for(int i=1;i<(int) ans.size();i+=2)
    {
        res+=ans[i];
    }
    cout<<res<<"\n";
    //:
}


signed main(){
FAST_IO;
int t=1;
cin>>t;
while(t--)
solve();
return 0;
}
