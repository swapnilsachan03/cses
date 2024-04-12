#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

#define vi vector<int>
#define vii vector<vector<int>>
#define pi pair<int, int>
#define pii vector<pair<int, int>>

int main()
{
  int k;
  cin >> k;

  for (ll n = 1; n <= k; n++) {
    ll ways = (n * n) * (n * n - 1) / 2;
    ll attacks = 4 * (n - 1) * (n - 2);

    cout << ways - attacks << endl;
  }

  return 0;
}
