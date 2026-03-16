#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a || b || c || d >= 2)
    {
        int multi = a * b * c * d;
        double result = multi % 100;
        cout << result;
    }

    else
        cout << "00";
}