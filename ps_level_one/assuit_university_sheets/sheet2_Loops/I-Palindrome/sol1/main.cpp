#include <iostream>
#include <bits/stdc++.h>
#include <algorithm> // here reverse func
#include <string>
using namespace std;
int main()
{
    //solution using built in functions, in strings
    string s;

    cin >> s;

    reverse(s.begin(), s.end());

    cout << s;

    return 0;
}
