#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n, p;
  cin >> n >> p;
  cout << min(p / 2, (n - p) / 2);
}