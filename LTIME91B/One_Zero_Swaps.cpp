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
    int n;cin>>n;
    string s,p;cin>>s>>p;
    
    int zeros=0,zerop=0;
    int ones=0,onep=0;
    string temps="";
    for(int i=0;i<n;i++)
    {
        if(s[i]!=p[i])
        {
            if(s[i]=='0')
            zeros++,onep++;
            else
            ones++,zerop++;
             temps+=s[i];
        }
    }
    if(ones==onep && zeros==zerop && (ones==zeros))
    { 
        int zero=0,one=0;
        for(char ch:temps)
        {
            if(ch=='1')
            one++;
            else{
                if(one>0)
                one--;
                else{
                    cout<<"No"<<"\n";
                    return;
                }
            }
        }
        cout<<"Yes"<<"\n";
    }
    else{
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
