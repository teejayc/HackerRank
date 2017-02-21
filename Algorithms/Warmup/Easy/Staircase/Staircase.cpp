#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n = 0;
    cin >> n;
    
    for(int i = 0; i < n; ++i) {
      int secDiagonalIndex = n - i - 1;
      for(int j = 0; j < n; ++j) {
        if (j < secDiagonalIndex) {
          cout << ' ';
        }
        else {
          cout << '#';
        }
      }
      cout << endl;
    }   
    return 0;
}
