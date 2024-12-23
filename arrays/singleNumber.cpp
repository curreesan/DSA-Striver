#include <bits/stdc++.h>
using namespace std;

int singleRepeat(vector<int> &arr) {
  unordered_map<int, int> map;
  for (int i = 0; i < arr.size(); i++) {
    map[arr[i]]++;
  }

  for (auto m : map) {
    if (m.second == 1)
      return m.first;
  }
}

int xorMethod(vector<int> &arr) {
  int xorr = 0;
  for (int i = 0; i < arr.size(); i++) {
    xorr = xorr ^ arr[i];
  }
  return xorr;
}
int main() {
  vector<int> vec = {1, 1, 2, 2, 3, 4, 4};
  cout << singleRepeat(vec) << endl;
  cout << xorMethod(vec) << endl;
  return 0;
}