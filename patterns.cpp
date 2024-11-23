#include <bits/stdc++.h>
using namespace std;

void p1(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      cout << '*';
    }
    cout << '\n';
  }
}
void p2(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << '*';
    }
    cout << '\n';
  }
}
void p3(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j;
    }
    cout << '\n';
  }
}
void p4(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << i;
    }
    cout << '\n';
  }
}
void p5(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = n - i + 1; j >= 1; j--)
    {
      cout << '*';
    }
    cout << '\n';
  }
}
void p6(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i + 1; j++)
    {
      cout << j;
    }
    cout << '\n';
  }
}
void p7(int n)
{
  for (int i = 0; i < n; i++)
  {
    // space
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << ' ';
    }
    // stars
    for (int star = 1; star <= 2 * i + 1; star++)
    {
      cout << '*';
    }
    // space
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << ' ';
    }
    cout << '\n';
  }
}
void p8(int n)
{
  for (int i = 0; i < n; i++)
  {
    // space
    for (int j = 0; j < i; j++)
    {
      cout << ' ';
    }
    // stars
    for (int star = 0; star < 2 * n - 2 * i - 1; star++)
    {
      cout << '*';
    }
    // space
    for (int j = 0; j < i; j++)
    {
      cout << ' ';
    }
    cout << '\n';
  }
}
void p9(int n)
{
  p7(n);
  p8(n);
}
void p10(int n)
{
  for (int i = 0; i <= 2 * n - 1; i++)
  {
    if (i <= n)
    {
      for (int j = 0; j < i; j++)
      {
        cout << '*';
      }
      cout << '\n';
    }
    else
    {
      for (int j = 0; j < 2 * n - i; j++)
      {
        cout << '*';
      }
      cout << '\n';
    }
  }
}
void p11(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      if (j % 2 == 0)
      {
        cout << "0 ";
      }
      else
      {
        cout << "1 ";
      }
    }
    cout << endl;
  }
}

int main()
{
  p11(5);
  return 0;
}