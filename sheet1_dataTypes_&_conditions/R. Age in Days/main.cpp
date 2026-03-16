#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int years = n / 365;
    cout << years << "\n";

    int months = n / 12 / 30;
    cout << months << "\n";

    int dayes = months % 30;
    cout << dayes;
} 