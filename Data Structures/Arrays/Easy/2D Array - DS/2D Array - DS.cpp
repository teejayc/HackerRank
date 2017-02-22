#include <cmath>
#include <climits>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

const int INPUT_ARR_SIZE = 6;

int getSum(vector<vector<int>>* arr, int i, int j) {
  return (*arr)[i - 1][j - 1] + (*arr)[i - 1][j] + (*arr)[i - 1][j + 1]
          + (*arr)[i][j]
          + (*arr)[i + 1][j - 1] + (*arr)[i + 1][j] + (*arr)[i + 1][j + 1];
}

int main(){
  vector<vector<int>> arr(INPUT_ARR_SIZE, vector<int>(INPUT_ARR_SIZE));
  for(int arr_i = 0; arr_i < INPUT_ARR_SIZE; ++arr_i){
    for(int arr_j = 0; arr_j < INPUT_ARR_SIZE; ++arr_j){
      cin >> arr[arr_i][arr_j];
    }
  }
  
  int maxSum = INT_MIN;
  for(int i = 1; i < INPUT_ARR_SIZE - 1; ++i) {
    for(int j = 1; j < INPUT_ARR_SIZE - 1; ++j) {
      maxSum = max(maxSum, getSum(&arr, i, j));
    }
  }
  
  cout << maxSum;
  return 0;
}
