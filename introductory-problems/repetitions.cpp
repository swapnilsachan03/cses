#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<vector<int>>
#define pi pair<int, int>
#define pii vector<pair<int, int>>

int main()
{
  string s;
  cin >> s;

  int cnt = 1, ans = 1;

  for (int i = 1; i < s.length(); i++) {
    if (s[i] == s[i - 1]) cnt += 1;
    else cnt = 1;

    ans = max(ans, cnt);
  }

  cout << ans;

  return 0;
}
