#include <iostream>
using namespace std;

int main()
{
  int x;
  cin >> x;
  for (int i = 2; i < x; i++) // i=2
  {
    if (x % x == 0 && x % 1 == 0) // x=15
    {
      if (x % i != 0)
      {
        cout << "YES" << endl;
      }
      else
        cout << "NO" << endl;
      break;
    }
  }
  return 0;
}