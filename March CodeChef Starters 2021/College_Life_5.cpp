/*
    Author: Manish Kumar
    Username: manicodebits
    Created: 16:25:47 28-03-2021
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI 3.141592653589
#define MOD 1000000007
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(0)
#define deb(x) cout << "[ " << #x << " = " << x << "] "

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> f(n), c(m);
    for (int i = 0; i < n; i++)
        cin >> f[i];
    for (int j = 0; j < m; j++)
        cin >> c[j];

    int i = 0, j = 0;
    int ans = 0;
    int turn = 0;

    while (i < n && j < m)
    {
        if (f[i] <= c[j])
        {
            if (turn == 1)
            {
                turn = 0;
                ans++;
            }

            i++;
        }
        else
        {
            if (turn == 0)
            {
                turn = 1;
                ans++;
            }
            j++;
        }
    }
    if (i < n && turn == 1)
        ans++;
    if (j < m && turn == 0)
        ans++;
    cout << ans << "\n";
}

signed main()
{
    FAST_IO;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
