#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Solution3: Use modular arithmetic to calculate the final position.
// Time: O(n)
// Number of iteration: 1
int main() {
  int n, d;
  cin >> n >> d;
  d = d % n;
  vector<int> inputArr(n, 0);
  for(int i = 0; i < n; ++i) {
    int input = 0;
    cin >> input;
    inputArr[(n + i - d) % n] = input;
  }
  
  for(int i = 0; i < n; ++i) {
    cout << inputArr[i] << " ";
  }
  return 0;
}