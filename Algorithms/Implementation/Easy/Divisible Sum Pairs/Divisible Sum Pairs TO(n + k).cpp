#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Solution 2: Separate input numbers into buckets.
//              Each buckets represents the numbers divide k with the same
//              remainder. Then, pair the numbers in two buckets that sum
//              up to k.
//  Time: O(n + k)
//  Memory: O(k)
int main() {
  int n, k;
  cin >> n >> k;
  vector<int> input(n, 0);
  unordered_map<int, int> remainderMapCount;
  int count = 0;

  for(int i = 0; i < n; ++i) {
    int inputNum = 0;
    cin >> inputNum;
    int remainder = inputNum % k;
    if(remainderMapCount.find(remainder) == remainderMapCount.end()) {
      remainderMapCount[remainder] = 1;
    }
    else {
      ++remainderMapCount[remainder];
    }
  }
  if(remainderMapCount.find(0) != remainderMapCount.end()) {
    count = remainderMapCount[0] * (remainderMapCount[0] - 1) / 2;
  }
  for(int i = 1; i <= k / 2; ++i) {
    if(remainderMapCount.find(i) != remainderMapCount.end()) {
      if (i == k - i) {
        count += remainderMapCount[i] * (remainderMapCount[i] - 1) / 2;
      }
      else {
        count += remainderMapCount[i] * remainderMapCount[k - i];
      }
      
    }
  }

  cout << count;

  return 0;
}
