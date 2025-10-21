#include <bits/stdc++.h>
using namespace std;

long long MOD = 1e9+7;

long long exp (int a, int x) {
  if (x == 0) return 1;

  long long res;

  if (x % 2 == 0) res = exp(a, x / 2) * exp(a, x / 2);
  else res = exp(a, x / 2) * exp(a, x / 2) * a;

  return res % MOD;
}

int main()
{
  int n;
  cin >> n;

  cout << exp(2, n) << endl;

  return 0;
}
