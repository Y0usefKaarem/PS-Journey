#include <iostream>
using namespace std;

int main()
{

  int x, prime = 0;
  cin >> x;

  for (int i = 1; i <= x; i++) // x = 7
  {
    if (x % i == 0)
    {
      prime++; // 1
    }
  }
  if (prime == 2)
  {
    cout << "YES" << endl;
  }
  else
    cout << "NO" << endl;

  return 0;
}