
#include <cmath>
#include <queue>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;

//  Solution1: rotate the array k times
//    Complexity: 
//      Time: O(n * k) or O(n^2) if n is ~= k
//  Solution2: Cut the array into two parts. First part is from the begining all the way before n - (k % n).
//              The second part is the rest of the array. Reverse each part and reverse the entire array at the end.
//    Complexity:
//      Time: O(n)

int main(){
    int n;
    int k;
    int q;
    cin >> n >> k >> q;
    vector<int>::iterator it;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    int reversePivot = n - (k % n);
    reverse(a.begin(), a.begin() + reversePivot);
    reverse(a.begin() + reversePivot, a.end());
    reverse(a.begin(), a.end());
    for(int a0 = 0; a0 < q; a0++){
        int m;
        cin >> m;
        cout << a[m] << endl;
    }
    return 0;
}
