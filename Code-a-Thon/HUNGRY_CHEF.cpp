/*
    Author: Manish Kumar
    Username: manicodebits
    Created: 10:18:00 18-04-2021
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
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<vector<int>> prefix(2, vector<int>(n)), suffix(2, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        if (i - 1 >= 0)
        {
            prefix[1][i] = prefix[1][i - 1];
            prefix[0][i] = prefix[0][i - 1];
        }
        prefix[i % 2][i] += arr[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (i + 1 < n)
        {
            suffix[1][i] = suffix[1][i + 1];
            suffix[0][i] = suffix[0][i + 1];
        }
        suffix[i % 2][i] += arr[i];
    }

    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        int odd = 0, even = 0;
        if (i - 1 >= 0)
        {
            odd = prefix[1][i - 1];
            even = prefix[0][i - 1];
        }
        if (i + 1 < n)
        {
            odd += suffix[0][i + 1];
            even += suffix[1][i + 1];
        }

        if (odd == even)
        {
            ans = max(ans, arr[i]);
        }
    }
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
