#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long a, c;
    long long b, d;
    cin >> a >> b >> c >> d;

    double oper1 = pow(a, b); // A^B
    double oper2 = pow(c, d); // C^D

    if (oper1 != oper2)
    {
        if (oper1 > oper2)
            cout << "YES";
        else if (oper1 < oper2)
            cout << "NO";
    }

    else
        cout << "NO";

    // fales; 8376260 70 8376259 70
    // 5 2 5 2 => no
    // 4608515 63 4608516 63 => no
    // 4608515 63 4608516 63 => no
    //4608515 63 4608516 63
    return 0;
}