#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> arr, int n, int num) {
  int i;
  for (i = 0; i < n; i++) {
    if (arr[i] == num)
      return i;
  }
  return -1;
}

int main() {
  vector<int> array = {1, 2, 2, 2, 2, 5};
  cout << linearSearch(array, array.size(), 5);
  return 0;
}
