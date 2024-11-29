#include <bits/stdc++.h>
using namespace std;

// TC O(n), SC O(1)
int removeDuplicates(vector<int> &arr, int n) {
  int i = 0;
  for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) {
      arr[i + 1] = arr[j];
      i++;
    }
  }
  return i + 1;
}

int main() {
  vector<int> array = {1, 1, 1, 5, 10, 20, 10};
  cout << removeDuplicates(array, array.size());

  /*
  brute force
   set insert - nlogn
   arr modify - n
   SC - n

   set<int> set;

   for (int i = 0; i < array.size(); i++) {
   set.insert(arr[i])}

   index = 0;
   for (auto it : set) {
   arr[index] = *it;
   index++;
   }

  */
  return 0;
}
