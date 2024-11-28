#include <bits/stdc++.h>
using namespace std;

int main() {
  int arr[] = {1, 2, 3, 4, 4, 5};

  map<int, int> mpp;
  for (int i = 0; i < 5; i++) {
    mpp[arr[i]]++;
  }

  for (auto it : mpp) {
    cout << it.first << "->" << it.second << endl;
  }
  return 0;
}
