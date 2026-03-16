#include <iostream>
using namespace std;
int main()
{

  int size, x,
      pos = 0, neg = 0, odd = 0, even = 0;

  cin >> size;

  while (size--)
  {
    cin >> x; //-3

    if (x > 0)
      pos++;
    if (x < 0)
      neg++; // neg=
    if (x % 2 == 0)
      even++;
    if (abs(x) % 2 == 1) // odd=1
      odd++;
  }

  cout << "Even:  " << even << "\n";
  cout << "Odd:  " << odd << "\n";
  cout << "Positive:  " << pos << "\n";
  cout << "Negative:  " << neg << "\n";

  return 0;
}