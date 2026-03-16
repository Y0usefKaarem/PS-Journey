#include <iostream>
using namespace std;

int main()
{

  int size, x, maxi = 0;
  cin >> size;
  while (size--)
  {
    cin >> x;
    if (x > maxi)
    {
      maxi = x;
    }
  }
  cout << maxi;

  return 0;
}