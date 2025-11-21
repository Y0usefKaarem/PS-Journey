#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    float x;
    cin >> x;

    //case 1
    if (x >= 0 && x <=25)
        cout << "Interval [0,25]";
    //case 2
    else if (x > 25 && x <= 50)
        cout << "Interval (25,50]";
    //case 3
    else if (x > 50 && x <= 75)
        cout << "Interval (50,75]";
    //case 4
    else if (x > 75 && x <= 100)
        cout << "Interval (75,100]";
    //case 5
    else
        cout << "Out of Intervals";
}