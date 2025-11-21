#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long num1, num2, num3, num4, result, first, second;
    cin >> num1 >> num2 >> num3 >> num4;

        result = num1 * num2 * num3 * num4;
        
        second = (result / 10) % 10; // to take 2nd digit
        cout << second;

        first = result % 10; //to take 1st digit
        cout << first;
        return 0;
    
}