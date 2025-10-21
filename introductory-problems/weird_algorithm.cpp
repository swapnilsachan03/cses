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

  cout << n << " ";

  while (n != 1) {
    if (n % 2 == 0) n /= 2;
    else n = n * 3 + 1;

    cout << n << " ";
  }

  return 0;
}
