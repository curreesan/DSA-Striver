#include <bits/stdc++.h>
using namespace std;

bool armstrongCheck(int num)
{
  int copy = num;

  int sum = 0;
  while (copy > 0)
  {
    int cube = copy % 10;
    sum += (cube * cube * cube);

    copy /= 10;
  }
  return sum == num;
}

int main()
{
  cout << armstrongCheck(153);
  return 0;
}