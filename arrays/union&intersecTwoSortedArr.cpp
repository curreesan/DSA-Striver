#include <bits/stdc++.h>
using namespace std;

vector<int> unionArr(vector<int> &a, vector<int> &b) {
  int n1 = a.size();
  int n2 = b.size();
  int i, j = 0;
  vector<int> unionArr;

  while (i < n1 && j < n2) {
    if (a[i] <= b[j]) {
      if (unionArr.size() == 0 || unionArr.back() != a[i]) {
        unionArr.push_back(a[i]);
      }
      i++;
    } else {
      if (unionArr.size() == 0 || unionArr.back() != b[j]) {
        unionArr.push_back(b[i]);
      }
      j++;
    }
  }

  while (i < n1) {
    if (unionArr.size() == 0 || unionArr.back() != a[i]) {
      unionArr.push_back(a[i]);
    }
    i++;
  }

  while (j < n2) {
    if (unionArr.size() == 0 || unionArr.back() != b[j]) {
      unionArr.push_back(b[j]);
    }
    j++;
  }

  return unionArr;
}

vector<int> intersecArr(vector<int> &a, vector<int> &b) {
  int n1 = a.size();
  int n2 = b.size();
  int i = 0;
  int j = 0;
  vector<int> intersecArray;

  while (i < n1 && j < n2) {
    if (a[i] == b[j]) {
      intersecArray.push_back(a[i]);
      i++;
      j++;
    } else if (a[i] < b[j]) {
      i++;
    } else {
      j++;
    }
  }
  return intersecArray;
}

int main() {
  vector<int> arr1 = {1, 2, 2, 3, 4, 8};
  vector<int> arr2 = {1, 8};

  vector<int> unionArray = unionArr(arr1, arr2);
  vector<int> intersecArray = intersecArr(arr1, arr2);

  for (auto u : unionArray)
    cout << u << endl;
  cout << "-------------" << endl;
  for (auto i : intersecArray)
    cout << i << endl;
  return 0;
}
