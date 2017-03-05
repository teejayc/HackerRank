#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, k, b;
    cin >> n >> k;
    int sharedSum = 0;
    
    int i = 0;
    while (i < n) {
      int input = 0;
      cin >> input;
      if (i != k) {
        sharedSum += input;
      }
      ++i;
    }
    
    cin >> b;
    if (sharedSum / 2 == b) {
      cout << "Bon Appetit" << endl;
    }
    else {
      cout << b - sharedSum / 2 << endl;
    }
    
    return 0;
}
