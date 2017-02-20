#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

// generalization
class Score {
  static const int NUM_SCORE = 3;
  vector<int> scores;
  
public:
  Score() {}
  
  void readScore() {
    for(int i = 0; i < NUM_SCORE; ++i) {
      int input = 0;
      cin >> input;
      scores.push_back(input);
    }
  }
  
  int operator[](int index){
    return scores[index];
  }
  

  void printIndividualScores(Score& b) {
    int thisScore = 0;
    int bScore = 0;
    for(int i = 0; i < NUM_SCORE; ++i) {
      int diff = scores[i] - b[i];
      diff = diff ? diff / abs(diff) : 0;
      if (diff > 0) {
        thisScore += diff;
      }
      else {
        bScore -= diff;
      }
    }
    cout << thisScore << " " << bScore;
  }
};

int main(){
    Score a;
    Score b;
    
    a.readScore();
    b.readScore();
    
    a.printIndividualScores(b);
    
    return 0;
}
