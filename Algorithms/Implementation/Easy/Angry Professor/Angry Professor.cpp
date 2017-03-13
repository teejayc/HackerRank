#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n, k;
    cin >> n >> k;
    int numOnTime = 0;
    for(int i = 0; i < n; ++i) {
      int numIn = 0;
      cin >> numIn;
      if(numIn <= 0) {
        ++numOnTime;
      }
    }
    if(numOnTime >= k) {
      cout << "NO" << endl;
    }
    else {
      cout << "YES" << endl;
    }
  }
  return 0;
}