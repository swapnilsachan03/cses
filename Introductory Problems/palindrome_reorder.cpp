#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;

  int n = s.length();
  string ans = string(n, '*');

  int frq[26] = {};

  for (int i = 0; i < n; i++) {
    frq[s[i] - 'A'] += 1;
  }

  int cnt = 0;

  for (int i = 0; i < 26; i++) {
    if (frq[i] % 2 == 1) cnt += 1;
  }

  if (cnt > 1) {
    cout << "NO SOLUTION" << endl;
  }

  else {
    int l = 0, r = n - 1;

    for (int i = 0; i < n; i++) {
      if (frq[s[i] - 'A'] % 2 == 1) {
        ans[n / 2] = s[i];
        frq[s[i] - 'A'] -= 1;
      }

      while (frq[s[i] - 'A'] > 0) {
        ans[l] = ans[r] = s[i];
        frq[s[i] - 'A'] -= 2;
        
        l += 1;   r -= 1;
      }
    }

    cout << ans << endl;
  }

  return 0;
}
