#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

const int INPUT_SIZE = 5;

int main() {
  int minNum = INT_MAX;
  int sum = 0;
  for(int i = 0; i < INPUT_SIZE; ++i) {
    int input = 0;
    cin >> input;
    minNum = min(input, minNum);
    sum += input;
  }
  cout << sum - minNum;
}