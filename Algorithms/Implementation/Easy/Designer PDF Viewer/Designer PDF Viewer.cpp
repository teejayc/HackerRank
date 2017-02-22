#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

const int NUM_ALF = 26;

int main() {
  vector<int> heights(NUM_ALF, 0);
  for(int i = 0; i < NUM_ALF; ++i) {
    cin >> heights[i];
  }
  string word;
  cin >> word;
  int maxHeight = 0;
  int wordSize = word.size();
  for(int i = 0; i < wordSize; ++i) {
    maxHeight = max(maxHeight, heights[word[i] - 'a']);
  }
  cout << maxHeight * wordSize;
}