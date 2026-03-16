#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a , b;
    //  A&B >= 1 
    char s;

    cin >> a >> s >> b ;

    if ( a >= 1 && b >= 1 ) 
    {
        if (s == '+')
            cout << a + b ;

        else if (s == '-')
            cout << a - b ;

        else if (s == '*')
            cout << a * b ;

        else if (s == '/' ) 
            cout << a / b ;
    }

    return 0;

}