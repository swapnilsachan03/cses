#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<vector<int>>
#define pi pair<int, int>
#define pii vector<pair<int, int>>

int main()
{
  int n;
  cin >> n;

  vi nums(n);

  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  long long ans = 0;

  for (int i = 1; i < n; i++) {
    if (nums[i - 1] > nums[i]) {
      ans += nums[i - 1] - nums[i];
      nums[i] = nums[i - 1];
    }
  }

  cout << ans;

  return 0;
}
