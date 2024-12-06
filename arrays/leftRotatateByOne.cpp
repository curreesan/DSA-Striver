#include <bits/stdc++.h>
using namespace std;

vector<int> oneShift(vector<int> arr, int n) {
  int temp = arr[0];
  for (int i = 1; i < n; i++) {
    arr[i - 1] = arr[i];
  }
  arr[n - 1] = temp;
  return arr;
}

int main() {
  vector<int> array = {1, 1, 1, 5, 10, 20, 10};
  vector<int> order = oneShift(array, array.size());

  for (auto o : order)
    cout << o << endl;
  return 0;
}
