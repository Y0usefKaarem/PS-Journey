#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int mini1 = min({a, b, c});
    int Max = max({a, b, c});

    // mini1
    cout << mini1 << endl;

    // midle
    if (a != mini1 && a != Max)
    {

        cout << a << endl;
    }

    else if (b != mini1 && b != Max)
    {
        cout << b << endl;
    }

    else
    {
        cout << c << endl;
    }

    cout << Max << endl;

    cout << endl;

    cout << a << endl
         << b << endl
         << c;
    return 0;
}