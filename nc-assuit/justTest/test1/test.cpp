#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int x;
    cin >> x;

    // to take 1st digit in 4 digits => 1000 => 10%(x/1000). 
    int thousands = x / 1000; //int for delete all farctinal digits.

    if (thousands % 2 == 0)
        cout << "EVEN";

    else cout << "ODD";

    return 0;




}