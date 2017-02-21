#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    string inputStr;
    cin >> inputStr;
    
    int hour = (inputStr[0] - '0') * 10 + inputStr[1] - '0';
    if (inputStr[8] == 'P') {
      hour = (hour + 12) % 24;
      if (!hour) {
        hour = 12;
      }
    }
    else if (hour == 12) {
      hour = 0;
    }
    inputStr[0] = hour / 10 + '0';
    inputStr[1] = hour % 10 + '0';
    
    cout << inputStr.substr(0, 8);
    return 0;
}
