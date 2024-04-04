#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<vector<int>>
#define pi pair<int, int>
#define pii vector<pair<int, int>>

int main()
{
  int t;
  cin >> t;

  while (t--) {
    long long x, y;
    cin >> x >> y;

    long long ans;

    if (y > x) {
      if (y % 2 == 0) ans = (y - 1) * (y - 1) + x;
      else ans = y * y - x + 1;
    }

    else {
      if (x % 2 == 0) ans = x * x - y + 1;
      else ans = (x - 1) * (x - 1) + y;
    }

    cout << ans << endl;
  }

  return 0;
}
