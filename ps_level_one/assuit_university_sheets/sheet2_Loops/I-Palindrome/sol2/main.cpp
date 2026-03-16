#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
  long long x;
  cin >> x;

  long long cp = x; // get copy from x
  long long res = 0;
  long long rem = 0;

   // x = 123
   // x = 12
   // x = 1

  while (x--) // end loop when x = 0
  {
    rem = x % 10; // 1

    res = res * 10 + rem;// 321

    x = x / 10; // 1 / 10 = 0 End Loop
  }

  if (cp == res)
  {
    cout << res << endl;
    cout << "YES";
    }
  else
  {
    cout << res << endl;
    cout << "NO";
  }

  return 0;
}
