#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

void setApproach() {
  int n;
  cin >> n;

  unordered_set<int> st;
  int x;

  for (int i = 1; i < n; i++) {
    cin >> x;
    st.insert(x);
  }

  for (int i = 1; i <= n; i++) {
    if (st.find(i) == st.end()) cout << i << endl;
  }
}

void xorApproach() {
  int n;
  cin >> n;

  int x, xr = 0;

  for (int i = 1; i < n; i++) {
    cin >> x;
    xr = xr ^ x ^ i;
  }

  xr ^= n;

  cout << xr << endl;
}

void solve() {
  int n;
  cin >> n;

  int x;
  ll sum = 0, reqSum = n * (n + 1) / 2;

  for (int i = 0; i < n - 1; i++) {
    cin >> x;
    sum += x;
  }

  cout << reqSum - sum << endl;
}

int main()
{
  solve();
  return 0;
}
