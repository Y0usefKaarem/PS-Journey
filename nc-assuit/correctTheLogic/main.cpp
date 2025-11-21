#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int num1,num2,num3;
    cin >>num1>>num2>>num3;

    //max test 
    // input ex ::   7 6 7
    // this is logical error because is cond 1 = fales and cond 2 = fales 
    // fales && fales = fales!! 'NO OUTPUT"
    // the true is >= && >=.

    if (num1>=num2&&num1>=num3)
        cout << num1;
    


}