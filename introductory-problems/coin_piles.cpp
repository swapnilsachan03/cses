#include <bits/stdc++.h>
using namespace std;

/**

Suppose in a given query, there are A and B coins in the piles respectively. Let's say, to empty the first pile, we've to remove 2 coins X number of times and 1 coin Y number of times. Now when we do this, we'll also need to remove coins from the second pile, 1 coin X number of times and 2 coins Y number of times. This gives us:

2 * X + 1 * Y = A  (equation 1)
1 * X + 2 * Y = B  (equation 2)

Simplifying the above equations, we get:

X = (2 * A - B) / 3
Y = (2 * B - A) / 3

So, to check whether it is possible to empty both the piles, (2 * A - B) should be positive and divisible by 3 and (2 * B - A) should pe positive and divisible by 3.

*/

int main()
{
  int t;
  cin >> t;

  while (t--) {
    int a, b;
    cin >> a >> b;
    
    int x = 2 * a - b;
    int y = 2 * b - a;

    if (x < 0 || x % 3 != 0 || y < 0 || y % 3 != 0) cout << "NO" << endl;
    else cout << "YES" << endl;
  }

  return 0;
}
