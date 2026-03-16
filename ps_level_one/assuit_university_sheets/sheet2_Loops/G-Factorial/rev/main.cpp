#include <iostream>
using namespace std;

int main()
{

  int size, x;
  cin >> size;
  while (size--)
  {
    int fact = 1;
    cin >> x;
    for (int i = 2; i <= x; i++)
    {
      fact *= i;
    }
    cout << fact << endl;
  }

  return 0;
}