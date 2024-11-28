#include <bits/stdc++.h>
using namespace std;

// O(n^2) - best, mid, worst case
// pick minimum index, swap, repeat
void selectionSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int min_index = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[min_index] > arr[j])
      {
        min_index = j;
      }
    }
    int temp = arr[min_index];
    arr[min_index] = arr[i];
    arr[i] = temp;
  }
}

// O(n^2) - worst, mid
// O(N) - sorted array, one loop break
// push max to the end at each iteration
void bubbleSort(int arr[], int n)
{
  for (int i = n - 1; i >= 0; i--)
  {
    int swap = 0;
    for (int j = 0; j <= i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        swap = 1;
      }
      if (swap == 0)
        break;
    }
  }
}

// takes element, places it in correct array position
// O(n^2) - worst, mid
// O(n) - best case
void insertionSort(int arr[], int n)
{
  for (int i = 1; i < n; i++)
  {
    int j = i;
    while (j > 0)
    {
      if (arr[j] < arr[j - 1])
      {
        int temp = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = temp;
      }
      j--;
    }
  }
}

// divide and conquer
// SC: 0(n) - temp array created during merge
// TC: N* log2n
// O(n) - worse case merge
void merge(vector<int> &arr, int low, int mid, int high)
{
  vector<int> temp;
  int left = low;
  int right = mid + 1;

  while (left <= mid && right <= high)
  {
    if (arr[left] <= arr[right])
    {
      temp.push_back(arr[left]);
      left++;
    }
    else
    {
      temp.push_back(arr[right]);
      right++;
    }
  }

  while (left <= mid)
  {
    temp.push_back(arr[left]);
    left++;
  }

  while (right <= high)
  {
    temp.push_back(arr[right]);
    right++;
  }

  for (int i = low; i <= high; i++)
  {
    arr[i] = temp[i - low];
  }
}
void mergeSort(vector<int> &arr, int low, int high)
{
  if (low == high)
    return;
  int mid = (low + high) / 2;
  mergeSort(arr, low, mid);
  mergeSort(arr, mid + 1, high);
  merge(arr, low, mid, high);
}

// TC: Nlogn
// SC: O(1) - uses recursive stack space
// pick a pivot and place it in sorted array
// smaller on the left, larger on the right
void swap(int &val1, int &val2)
{
  int temp = val1;
  val1 = val2;
  val2 = temp;
}

int partition(vector<int> &arr, int low, int high)
{
  int pivot = arr[low];
  int i = low;
  int j = high;

  while (i < j)
  {
    while (arr[i] <= pivot && i <= high - 1)
    {
      i++;
    }
    while (arr[j] > pivot && j >= low + 1)
    {
      j--;
    }
    if (i < j)
      swap(arr[i], arr[j]);
  }
  swap(arr[low], arr[j]);
  return j;
}
void qs(vector<int> &arr, int low, int high)
{
  if (low < high)
  {
    int pIndex = partition(arr, low, high);
    qs(arr, low, pIndex - 1);
    qs(arr, pIndex + 1, high);
  }
}
vector<int> quickSort(vector<int> arr)
{
  qs(arr, 0, arr.size() - 1);
  return arr;
}

int main()
{
  /*
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  //   selectionSort(arr, n);
  //   bubbleSort(arr, n);
  //   insertionSort(arr, n);

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  */

  vector<int> array = {5, 4, 3, 2, 1, 0};
  // mergeSort(array, 0, array.size() - 1);
  vector<int> sortedArray = quickSort(array);
  for (int i = 0; i < sortedArray.size(); i++)
  {
    cout << sortedArray[i] << " ";
  }

  return 0;
}
