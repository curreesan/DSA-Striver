#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> arr, int start, int end) {
  while (start <= end) {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end++;
  }
}

vector<int> leftRotateD(vector<int> arr, int n, int d) {
  int finalD = d % n;

  vector<int> temp(finalD);

  for (int i = 0; i < finalD; i++) {
    temp[i] = arr[i];
  }

  for (int i = finalD; i < n; i++) {
    arr[i - finalD] = arr[i];
  }

  for (int i = n - finalD; i < n; i++) {
    arr[i] = temp[i - (n - finalD)];
  }

  return arr;
}

vector<int> optimal(vector<int> arr, int n, int d) {
  int finalD = d % n;
  reverse(arr, 0, finalD);
  reverse(arr, finalD, n);
  reverse(arr, 0, n);
}

int main() {
  vector<int> array = {1, 1, 1, 5, 10, 20, 10};
  vector<int> order = leftRotateD(array, array.size(), 3);

  for (auto o : order)
    cout << o << endl;

  vector<int> orderOptimal = optimal(array, array.size(), 3);

  for (auto o : orderOptimal)
    cout << o << endl;
  return 0;
}
