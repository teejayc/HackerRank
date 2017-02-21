#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n = 0;
    cin >> n;
    int priSum = 0;
    int secSum = 0;
    
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
        int input = 0;
        cin >> input;
        if (j == i) {
          priSum += input;
        }
        if (j ==  n - i + 1) {
          secSum += input;
        }
      }
    }
    
    cout << abs(priSum - secSum);
     
    return 0;
}
