#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  
  int maxHeight = 0;
  int totalPortion = 0;
  while(n--) {
    int inputNum = 0;
    cin >> inputNum;
    maxHeight = max(maxHeight, inputNum);
  }
  if(maxHeight > k) {
    cout << maxHeight - k;
  }
  else {
    cout << 0 << endl;
  }

  return 0;
}