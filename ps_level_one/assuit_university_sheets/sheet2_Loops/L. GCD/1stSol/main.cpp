#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{

  int n1, n2;
  cin >> n1 >> n2;

  int gcd = 0;
// n1 = 12
  for (int i = 1; i <= min(n1,n2); i++) // i = to <= min = n2 = 8;
  {
    if (n1 % i == 0 && n2 % i == 0)
    {
      gcd = i; // = 1 , 2, #[4]
    }
  }
  cout << gcd << "\n"; // 4

  return 0;
}