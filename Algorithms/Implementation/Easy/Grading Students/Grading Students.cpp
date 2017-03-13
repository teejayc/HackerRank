#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  while(n--) {
    int input;
    cin >> input;
    if(input < 38) {
      cout << input << endl;
    } else if((input + 1) % 5 == 0) {
      cout << input + 1 << endl;
    }
    else if((input + 2) % 5 == 0) {
      cout << input + 2 << endl;
    } else {
      cout << input << endl;
    }
  }
  
  return 0;
}