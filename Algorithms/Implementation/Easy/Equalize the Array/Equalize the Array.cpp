#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;


// Solution1: Brute Force
//  Time: O(n^2)
//  Space: O(1)
// Solution2: Sort and find the number that has the most count.
//  Time: O(nlogn)
//  Space: O(1)
// Solution3: Use hash table to count the number of each input.
//  Time: O(n)
//  Space: O(1)
int main() {
  int n;
  cin >> n;
  unordered_map<int, int> counter;
  for(int i = 0; i < n; ++i) {
    int input;
    cin >> input;
    if(counter.find(input) == counter.end()) {
      counter[input] = 1;
    }
    else {
      ++counter[input];
    }
  }
  int maxCount = 0;
  for (auto it = counter.begin(); it != counter.end(); ++it) {
    maxCount = max(maxCount, it->second);
  }
  cout << n - maxCount;
  
  return 0;
}