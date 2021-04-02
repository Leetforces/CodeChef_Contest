/*
    Author: Manish Kumar
    Username: manicodebits
    Created: 16:48:14 28-03-2021
*/


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI 3.141592653589
#define MOD 1000000007
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(0)
#define deb(x) cout<<"[ "<<#x<<" = "<<x<<"] " 



void solve(){ 
    int n,m,s,k;cin>>n>>m>>s>>k;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> building(s);
    for(int i=0;i<s;i++)
    {
         cin>>building[i];
    }
   
    vector<bool> visited(n+1,false);
    vector<int> cost(n+1);
    queue<int> q;
    int height=0;
    visited[0]=true;
    q.push(0);
    while(!q.empty())
    {
        int sz=(int)q.size();
        while(sz-- )
        {
             int id=q.front();
             q.pop();
             
             for(int child:adj[id])
             {
                 if(visited[child]==false)
                 {
                     q.push(child);
                     visited[child]=true;
                     cost[child]=2*(height+1);
                 }
                

             }
        }
        height++;
    }

    vector<int> temp;
    for(int i=0;i<s;i++)
    {
      temp.push_back(cost[building[i]]);
       
    }
    
    sort(temp.begin(),temp.end());

    int ans=0;
    for(int i=0;i<k;i++) ans+=temp[i];
    
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
