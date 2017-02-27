#include <iostream>
#include <vector>
using namespace std;

// Solution 1: Brute Force
//  Time: O(n)
//  Memory: O(1) without input array
int main() {
  int n, k;
  cin >> n >> k;
  vector<int> input(n, 0);
  int count = 0;

  for(int i = 0; i < n; ++i) {
    cin >> input[i];
  }

  for(int i = 0; i < n; ++i) {
    for(int j = i + 1; j < n; ++j) {
      if ((input[i] + input[j]) % k == 0) {
        ++count;
      }
    }
  }
  cout << count;

  return 0;
}
