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

  unordered_set<int> st;
  int x;

  for (int i = 0; i < n - 1; i++) {
    cin >> x;
    st.insert(x);
  }

  for (int i = 1; i <= n; i++) {
    if (st.find(i) == st.end()) cout << i << endl;
  }

  return 0;
}
