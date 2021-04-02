/*
    Author: Manish Kumar
    Username: manicodebits
    Created: 16:10:51 28-03-2021
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
    set<int> se;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        se.insert(temp);
    }
    if ((int)se.size() < m)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
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
