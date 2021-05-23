

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI 3.141592653589
#define MOD 1000000007
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(0)
#define deb(x) cout << "[ " << #x << " = " << x << "] "

int dp[1001][1001];
void solve()
{
    int x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
    int ans=0;

    while(x1<=x2){
        ans+=dp[x1][y1];
        x1++;
    }
    y1++;
    while(y1<=y2){
        ans+=dp[x2][y1];
        y1++;
    }
    cout<<ans<<"\n";


}

signed main()
{
    FAST_IO;
    int t = 1;
    dp[1][1] = 1;

    for (int i = 2; i <= 1000; i++)
    {
        dp[i][1] = dp[i - 1][1] + (i);
    }

    for (int i = 1; i <= 1000; i++)
    {
        int inc = i;
        for (int j = 2; j <= 1000; j++)
        {
            dp[i][j] = dp[i][j - 1] + inc;
            inc++;
        }
    }
    
    cin >> t;
    while (t--)
        solve();
    return 0;
}
