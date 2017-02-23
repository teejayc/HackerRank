#include <iostream>

using namespace std;

int main() {
  int s, t;
  cin >> s >> t;
  
  int a, b;
  cin >> a >> b;
  
  int numApples, numOranges;
  cin >> numApples >> numOranges;
  
  int numApplesFall = 0;
  int numOrangesFall = 0;
  
  for(int i = 0; i < numApples; ++i) {
    int d = 0;
    cin >> d;
    if(s <= a + d && a + d <= t) {
      ++numApplesFall;
    }
  }
  
  for(int i = 0; i < numOranges; ++i) {
    int d = 0;
    cin >> d;
    if(s <= b + d && b + d <= t) {
      ++numOrangesFall;
    }
  }
  cout << numApplesFall << endl;
  cout << numOrangesFall << endl;
  
  return 0;
}