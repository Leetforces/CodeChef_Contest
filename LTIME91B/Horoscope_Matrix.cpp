/*
   Author: Manish Kumar
   Username: manicodebits
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI (3.141592653589)
#define MOD 1000000007
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(0)
#define deb(x) cout<<"[ "<<#x<<" = "<<x<<"] " 


void solve(){ 
   int n,m;cin>>n>>m;
   int mat[n][m];  
   int count=0;
   for(int i=0;i<n;i++)
   for(int j=0;j<m;j++)
   {
       cin>>mat[i][j];
       if(i!=0 && j!=0)
       {
           if(mat[i][j]!=mat[i-1][j-1])
           count++;
       }
   }

   int q;cin>>q;
   while(q--)
   {
       int x,y,val;cin>>x>>y>>val;

       if(mat[x-1][y-1]==val)
       {
           if(count==0)
           cout<<"Yes"<<"\n";
           else
           cout<<"No"<<"\n";
       }
       else{
           
           if(x-2>=0 && y-2>=0)
           {
               if(mat[x-2][y-2]==val) count--;
               if(mat[x-2][y-2]==mat[x-1][y-1]) count++;
           }

           if(x<n && y<m)
           {
              if(mat[x][y]==val) count--;
              if(mat[x][y]==mat[x-1][y-1]) count++;
           }

           mat[x-1][y-1]=val;

           if(count==0)
           cout<<"Yes"<<"\n";
           else
           cout<<"No"<<"\n";
       }
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
