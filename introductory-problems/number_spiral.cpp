#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

void solve() {
  ll x, y;
  cin >> x >> y;

  ll mx = max(x, y);
  ll innerSquareNums = (mx - 1) * (mx - 1);
  ll ans = 0;

  if (y == mx) {
    if (y % 2 == 1) ans = y * y - x + 1;
    else ans = innerSquareNums + x;
  } else {
    if (x % 2 == 0) ans = x * x - y + 1;
    else ans = innerSquareNums + y;
  }

  cout << ans << endl;
}

int32_t main()
{
  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}
