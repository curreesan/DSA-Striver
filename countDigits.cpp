#include <bits/stdc++.h>
using namespace std;

void countDigit(int number)
{
  int copy = number;
  int count = 0;

  while (copy > 0)
  {
    count++;
    copy /= 10;
  }

  cout << "Digits :" << count << endl;
}

int main()
{
  countDigit(109011);

  return 0;
}