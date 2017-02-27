#include <iostream>
#include <cmath>
using namespace std;

// BUG: does not consider the case where v1 == v2
int main() {
  double x1, v1, x2, v2;
  cin >> x1 >> v1 >> x2 >> v2;

  if (v1 == v2) {
    cout << "NO";
    return 0;
  }

  double numSteps = (x2 - x1) / (v1 - v2);

  if (numSteps > 0 && numSteps == floor(numSteps)) {
    cout << "YES";
  }
  else {
    cout << "NO";
  }

  return 0;
}
