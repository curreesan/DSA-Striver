#include <bits/stdc++.h>
using namespace std;

void reverseNumber(int num)
{
  int revNum = 0;

  while (num > 0)
  {
    revNum = (revNum * 10) + num % 10;
    num /= 10;
  }

  cout << "Reversed Number : " << revNum << endl;
}

int main()
{
  reverseNumber(1320);

  return 0;
}