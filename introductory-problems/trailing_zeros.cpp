#include <bits/stdc++.h>
using namespace std;

// brute force method to count number of 2's and 5's in each number, which we can calculate & add for each number and then output the minimum of 2 or 5

pair<int, int> count (int n) {
  int twos = 0, fives = 0;

  while (n % 2 == 0 && n > 0) {
    twos += 1;
    n /= 2;
  }

  while (n % 5 == 0 && n > 0) {
    fives += 1;
    n /= 5;
  }

  return make_pair(twos, fives);
}

// optimal solution, the number of 5's in the factorial's factorization will always be less than the number of 2's

int countFives (int n) {
  if (n == 0) return 0;
  return n/5 + countFives(n/5);
}

int main()
{
  int n;
  cin >> n;

  cout << countFives(n);

  return 0;
}
