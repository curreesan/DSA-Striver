#include <bits/stdc++.h>
using namespace std;

void oneToN(int i, int n)
{
  if (i > n)
    return;
  cout << i << endl;
  oneToN(i + 1, n);
}

void oneToNBackTrack(int i, int n)
{
  if (i < 1)
    return;
  oneToNBackTrack(i - 1, n);
  cout << i << endl;
}

void nToOne(int i, int n)
{
  if (i < 1)
    return;
  cout << i << endl;
  nToOne(i - 1, n);
}

void nToOneBackTrack(int i, int n)
{
  if (i > n)
    return;
  nToOneBackTrack(i + 1, n);
  cout << i << endl;
}

// parameterised and functional recursion
// parameterized
void paraSum(int n, int sum)
{
  if (n < 1)
  {
    cout << sum << endl;
    return;
  }
  paraSum(n - 1, sum + n);
}

int funcSum(int n)
{
  if (n == 1)
    return 1;
  return n + funcSum(n - 1);
}

int factorialN(int n)
{
  if (n == 1)
    return 1;
  return n * factorialN(n - 1);
}

void revArr(int i, int arr[], int n)
{
  if (i >= n / 2)
    return;

  swap(arr[i], arr[n - i - 1]);
  revArr(i + 1, arr, n);
}

bool checkStringPalindrome(int i, string &s)
{
  if (i >= s.size() / 2)
    return true;

  if (s[i] != s[s.size() - i - 1])
    return false;
  return checkStringPalindrome(i + 1, s);
}

int fibonacci(int n)
{
  if (n <= 1)
    return n;
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
  paraSum(3, 0);
  cout << funcSum(3) << endl;
  cout << factorialN(3) << endl;
  int a[] = {1, 2, 3, 4, 5};
  revArr(0, a, 5);
  for (int i = 0; i < 5; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
  string s = "yeey";
  cout << "palindrome check: " << checkStringPalindrome(0, s) << endl;
  cout << "fibonacci: " << fibonacci(5);

  //---------------------------------------------------
  /*
  oneToN(0, 5);
  cout << "---------------------" << endl;
  nToOne(5, 5);
  cout << "---------------------" << endl;
  oneToNBackTrack(5, 5);
  cout << "---------------------" << endl;
  nToOneBackTrack(1, 5);
   */
  return 0;
}
