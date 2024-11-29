#include <bits/stdc++.h>
using namespace std;

// 0(n)
vector<int> secondOrderElement(vector<int> arr, int n) {
  int largest = INT_MIN;
  int sLargest = INT_MIN;

  int smallest = INT_MAX;
  int sSmallest = INT_MAX;

  for (int i = 1; i < n; i++) {
    if (largest < arr[i]) {
      sLargest = largest;
      largest = arr[i];
    } else if (arr[i] < largest && arr[i] > sLargest) {
      sLargest = arr[i];
    }
  }

  for (int i = 1; i < n; i++) {
    if (smallest > arr[i]) {
      sSmallest = smallest;
      smallest = arr[i];
    } else if (arr[i] > smallest && arr[i] < sSmallest) {
      sSmallest = arr[i];
    }
  }
  return {sLargest, sSmallest};
}

int main() {
  vector<int> array = {1, 1, 1, 5, 10, 20, 10};
  vector<int> order = secondOrderElement(array, array.size());

  for (auto o : order)
    cout << o << endl;

  return 0;
}
