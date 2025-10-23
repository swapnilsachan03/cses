#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

void solve() {
  ll n;
  cin >> n;

  ll sum = (n * (n + 1)) / 2;

  if (sum % 2 == 1) {
    cout << "NO" << endl;
    return;
  }

  sum /= 2;

  vector<int> a, b;

  for (int i = n; i >= 1; i--) {
    if (sum >= i) {
      sum -= i;
      a.push_back(i);
    } else {
      b.push_back(i);
    }
  }

  cout << "YES" << endl;

  cout << a.size() << endl;
  for (int i = 0; i < a.size(); i++) cout << a[i] << " ";
  cout << endl;

  cout << b.size() << endl;
  for (int i = 0; i < b.size(); i++) cout << b[i] << " ";
  cout << endl;
}

int32_t main()
{
  solve();
  return 0;
}
