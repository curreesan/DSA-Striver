#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(int num)
{
  int copy = num;
  int revNum = 0;

  while (copy > 0)
  {
    revNum = (revNum * 10) + copy % 10;
    copy /= 10;
  }

  return num == revNum;
}

int main()
{
  cout << checkPalindrome(1331);
  return 0;
}