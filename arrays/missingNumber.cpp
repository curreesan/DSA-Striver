#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> arr, int n) {
  unordered_map<int, int> frequency;

  for (int i = 0; i < n; i++) {
    frequency[arr[i]]++;
  }

  for (int i = 1; i <= n; i++) {
    if (frequency[i] == 0)
      return i;
  }
  return -1;
}

int optimal(vector<int> arr, int n) {
  int sum = (n + 1) * ((n + 2) / 2);

  int arrSum = 0;
  for (int i = 0; i < n; i++) {
    arrSum += arr[i];
  }
  return sum - arrSum;
}

int main() {
  vector<int> array = {1, 2, 3, 4, 5, 7};
  cout << missingNumber(array, array.size()) << endl;

  cout << optimal(array, array.size());

  return 0;
}
