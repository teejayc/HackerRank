#include <iostream>
#include <unordered_set>

using namespace std;

// Solution1: Brute Force
//  Time: O(n^2)
//  Memory: O(1)

// Solution2: Sort and count
//  Time: O(nlogn)
//  Memory: O(1)

// Solution3: Use hash set
//    Time: O(n)
//    Memory: O(n)
int main() {
  int n;
  cin >> n;
  unordered_set<int> colors;
  int numPairs = 0;
  while(n) {
    int inputNum = 0;
    cin >> inputNum;
    if (colors.find(inputNum) == colors.end()) {
      colors.insert(inputNum);
    }
    else {
      colors.erase(inputNum);
      ++numPairs;
    }
    --n;
  }
  
  cout << numPairs << endl;
  
  return 0;
}