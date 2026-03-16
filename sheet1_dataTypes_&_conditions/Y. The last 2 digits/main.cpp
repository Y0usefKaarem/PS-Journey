#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long result = (a % 100) * (b % 100) * (c % 100) * (d % 100) % 100; // to solve overflow of nums.

    if (result <= 9) // if result = (0,1,2,3,4,5,6,7,8,9).
    {
        cout << "0" << result; // add zero.
    }

    else
    {
        cout << result;
    }
    return 0;
}