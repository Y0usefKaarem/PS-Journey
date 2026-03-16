#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s1, e1, s2, e2; // s=> start, e=> end;
    cin >> s1 >> e1 >> s2 >> e2;

    if (max(s1, s2) <= min(e1, e2))
    {
        cout << max(s1, s2) << " " << min(e1, e2);
    }
    else
    {
        cout << "-1";
    }

    return 0;
}