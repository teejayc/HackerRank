#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n = 0;
    cin >> n;
    
    int numPos = 0;
    int numMinus = 0;
    int numZero = 0;
    
    for(int i = 0; i < n; ++i) {
      int input = 0;
      cin >> input;
      if(input > 0) {
        ++numPos;
      }
      else if(input == 0) {
        ++numZero;
      }
      else {
        ++numMinus;
      }
    }
    
    cout << (double)numPos / n << endl;
    cout << (double)numMinus / n << endl;
    cout << (double)numZero / n << endl;
    
    return 0;
}
