#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeroes(vector<int> arr, int n) {
  int j = -1;

  for (int i = 0; i < n; i++) {
    if (arr[i] == 0) {
      j = i;
      break;
    }
  }
  if (j == -1)
    return arr;

  for (int i = j + 1; i < n; i++) {
    if (arr[i] != 0) {
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      j++;
    }
  }
  return arr;
}

int main() {
  vector<int> array = {1, 1, 1, 0, 0, 2, 4, 0, 0};
  vector<int> move = moveZeroes(array, array.size());

  for (auto m : move)
    cout << m << endl;
  return 0;
}
