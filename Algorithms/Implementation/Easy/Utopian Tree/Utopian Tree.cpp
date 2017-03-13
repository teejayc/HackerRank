#include <iostream>
#include <cmath>
using namespace std;

// Solution1: For every input, simply iterate.
//  Time: O(n) for each input
//  Space: O(1)
// Solution2: Conder the fact that there will be a bit one added at the end of binary representation of the height.
//            end of year 1: 11;
//            end of year 2: 111;
//            end of year 3: 1111;
//            Shift the height left with the unit of the number of years. Then, conduct proper calculation.
//  Time: O(1) for each input
//  Space: O(1)
int main(){
  int n;
  cin >> n;
  while(n--) {
    int input = 0;
    cin >> input;
    int result = (1 << (int)(ceil((double)input / 2) + 1)) - 1;
    if(input % 2) {
      --result;
    }
    cout << result << endl;
  }
  return 0;
}
