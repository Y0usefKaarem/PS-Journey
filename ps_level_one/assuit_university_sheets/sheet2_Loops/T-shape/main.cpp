#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  for (size_t i = 1; i <= n; i++)
  {
    for (size_t space = 1; space <= n - 1; space++)
    {
      cout << " ";
    }
    for (size_t c = 1; c <= 2 * i - 1; c++)
    {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}