#include <bits/stdc++.h>
using namespace std;

// O(n)
bool arraySorted(vector<int> arr, int n) {
  for (int i = 0; i < n; i++) {
    if (arr[i] < arr[i - 1])
      return false;
  }
  return true;
}
int main() {
  vector<int> array = {1, 1, 1, 5, 10, 20, 10};
  cout << arraySorted(array, array.size());
  return 0;
}
