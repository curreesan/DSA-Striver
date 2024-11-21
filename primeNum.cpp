#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n)
{
  for (int i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return true;
}

int main()
{
  cout << checkPrime(17);

  return 0;
}