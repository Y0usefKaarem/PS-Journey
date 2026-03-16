#include <iostream>
using namespace std;

int main()
{

  int size;
  cin >> size;

  while (size--)
  {
    long long fact = 1;
    long long num;
    cin >> num; // 5

    for (int i = 2; i <= num; i++) // from one to num;
    {
      fact *= i;
    }
    cout << fact << endl;
  }
}
