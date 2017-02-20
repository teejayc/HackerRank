#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int n = 0;
  cin >> n;
  
  int sum = 0;
  for(int i = 0; i < n; ++i) {
    int input = 0;
    cin >> input;
    sum += input;
  }
  cout << sum;  
}
