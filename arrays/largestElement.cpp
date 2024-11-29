#include <bits/stdc++.h>
using namespace std;

// O(n)
int largestElement(vector<int> &arr, int n) {
  int largest = arr[0];
  for (int i = 1; i < n; i++) {
    if (largest < arr[i])
      largest = arr[i];
  }
  return largest;
}

int main() {
  vector<int> array = {1, 1, 1, 5, 10, 20, 10};
  cout << largestElement(array, array.size());

  return 0;
}
