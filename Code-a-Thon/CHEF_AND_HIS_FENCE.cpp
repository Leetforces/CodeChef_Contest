/*
    Author: Manish Kumar
    Username: manicodebits
    Created: 10:40:40 18-04-2021
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
  vector<int> first(n), last(n);
  for (int i = 0; i < n; i++)
    cin >> first[i];
  for (int i = 0; i < n; i++)
    cin >> last[i];

  map<int, int> mp;
  for (int i = 0; i < n; i++)
  {
    if (mp.find(first[i]) != mp.end() && mp[first[i]] != last[i])
    {
      cout << "NO\n";
      return;
    }
    mp[first[i]] = last[i];
  }
  cout << "YES\n";
}

signed main()
{
  FAST_IO;
  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
