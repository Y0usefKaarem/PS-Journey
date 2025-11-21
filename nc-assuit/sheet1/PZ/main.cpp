#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    double a, b, c, d;
    cin >> a >> b >> c >> d;
    // Very Very Big Powers, its make problem=> memory cant store this big numbers Powers.
    // Using Pow() function.

    if (pow(a, b / b) > pow(c, d / b)) 
    // i solve above broblem with simlifying this eqn (a^b>c^d) by divied / power(b) for 2 powers b/b & d/d.
    
        cout << "YES";
    
    else
        cout << "NO";

    return 0;
}