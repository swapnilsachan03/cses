#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<string> codes;
  codes.push_back("");

  for (int i = 0; i < n; i++) {
    int k = codes.size();

    for (int j = k - 1; j >= 0; j--) {
      codes.push_back(codes[j]);
    }

    k *= 2;

    for (int j = 0; j < k; j++) {
      if (j < codes.size() / 2) codes[j] += "0";
      else codes[j] += "1";
    }
  }

  for (auto gray_code : codes) {
    cout << gray_code << endl;
  }

  return 0;
}
