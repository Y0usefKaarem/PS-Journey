#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // This program takes a point (x, y)
    // and tells which quadrant it is in, or if it is on an axis or at the origin.

    float x , y;
    cin >> x >> y;

    if (x>0 && y > 0) { // + +
        cout << "Q1";
    }

    else if (x < 0 && y < 0){ // - -
        cout << "Q3";
    }

    else if (x > 0 && y < 0) { // + -
        cout << "Q4";
    }

    else if (x < 0 && y > 0){ // - +
        cout << "Q2";
    }

    else if (x == 0 && y == 0){ // 0 0 
        cout << "Origem";
    }

    else if (x != 0 && y == 0) { // x , 0
        cout << "Eixo X";
    }

    else if (y != 0 && x == 0) { // 0 , y
        cout << "Eixo Y";
    }

    return 0;
    

}

