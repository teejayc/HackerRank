#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

const int INPUT_SIZE = 5;

int main() {
  long minNum = INT_MAX;
  long maxNum = INT_MIN;
  long sum = 0;
  
  for(int i = 0; i < INPUT_SIZE; ++i) {
    long input = 0;
    cin >> input;
    minNum = min(input, minNum);
    maxNum = max(input, maxNum);
    sum += input;
  }
  
  cout << sum - maxNum << ' ' << sum - minNum;
}