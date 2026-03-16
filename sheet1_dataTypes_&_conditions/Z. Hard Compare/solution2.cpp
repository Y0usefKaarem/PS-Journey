#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    double right = b * log(a);
    double lift = d * log(c);

    if (right > lift)
    {
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}