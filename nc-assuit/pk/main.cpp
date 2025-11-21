#include <iostream>
using namespace std;
int main(){

//Program to Print the minimum number followed by a single space then print the maximum number.

    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

//Minimum

    if ( num1 <= num2 && num1 <= num3 )
        cout << num1 << " ";

    else if ( num2 <= num1 && num2 <= num3 )
        cout << num2 << " ";

    else 
        cout << num3 << " ";

//Maximum

    if ( num1 >= num2 && num1 >= num3 )
        cout << num1;

    else if ( num2 >= num1 && num2 >= num3 )
        cout << num2 ;

    else 
        cout << num3 ;
    return 0;

}