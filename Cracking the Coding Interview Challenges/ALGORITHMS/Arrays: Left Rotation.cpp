#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Solution1: Shift n elements d times.
// Time: O(nd)
// Solution2: Devide the array into two parts at dth elements.
//            Reverse each parts and reverse the entire array at the end.
// Time: O(n)
int main() {
  int n, d;
  cin >> n >> d;
  d = d % n;
  vector<int> inputArr(n, 0);
  for(int i = 0; i < n; ++i) {
    int input = 0;
    cin >> input;
    inputArr[i] = input;
  }
  
  reverse(inputArr.begin(), inputArr.begin() + d);
  reverse(inputArr.begin() + d, inputArr.end());
  reverse(inputArr.begin(), inputArr.end());
  
  for(int i = 0; i < n; ++i) {
    cout << inputArr[i] << " ";
  }
  return 0;
}