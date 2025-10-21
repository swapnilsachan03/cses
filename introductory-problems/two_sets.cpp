#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<vector<int>>
#define pi pair<int, int>
#define pii vector<pair<int, int>>

int main()
{
  long long n;
  cin >> n;

  long long sum = (n * (n +1)) / 2;

  if (sum % 2 == 1) {
    cout << "NO" << endl;
  }

  else {
    cout << "YES" << endl;

    vector<int> a, b;
    vector<int> vis (n + 1, 0);

    long long sum_a = 0;
    long long max_e = n;

    while (sum_a < sum / 2) {
      long long rem = sum / 2 - sum_a;

      if (max_e < rem) {
        a.push_back(max_e);
        sum_a += max_e;
        vis[max_e] = 1;
        max_e -= 1;
      }

      else {
        a.push_back(rem);
        vis[rem] = 1;
        sum_a = sum / 2;
      }
    }

    for (int i = 1; i <= n; i++) {
      if (vis[i] == 0) b.push_back(i);
    }

    cout << a.size() << endl;
    for (int i = 0; i < a.size(); i++) cout << a[i] << " ";
    cout << endl;

    cout << b.size() << endl;
    for (int i = 0; i < b.size(); i++) cout << b[i] << " ";
    cout << endl;
  }

  return 0;
}
