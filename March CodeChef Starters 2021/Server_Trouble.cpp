/*
    Author: Manish Kumar
    Username: manicodebits
    Created: 16:15:34 28-03-2021
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
  int n, k;
  cin >> n >> k;

  int minDist = (n + k - 1) / k;
  int no;
  if (n % k == 0)
    no = k;
  else
  {
    no = n % k;
  }

  cout << minDist << " " << no << "\n";
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
