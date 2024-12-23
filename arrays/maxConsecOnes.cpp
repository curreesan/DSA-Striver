#include <bits/stdc++.h>
using namespace std;

int maxConsecOnes(vector<int> arr, int n) {
  int curCount = 0;
  int finalCount = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] == 1) {
      curCount++;
    } else {
      if (finalCount < curCount) {
        finalCount = curCount;
      }
      curCount = 0;
    }
  }
  return (curCount > finalCount) ? curCount : finalCount;
}

int main() {
  vector<int> arr = {1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1};
  cout << maxConsecOnes(arr, arr.size());
  return 0;
}
