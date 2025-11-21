#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	// Program to calc the last digit in 2 numbers & summ.
 	long long n1, n2, sum;
	cin >> n1 >> n2;
    
	sum = ( n1 % 10 ) + ( n2 % 10 ) ;
	cout << sum << endl;
	return 0;
	// for example n1 = 14, n = 15
	// 14 mod 10 = (4) , and 15 mod 10 = (5)
	// so sum = 4 + 5 = 9 

	 
}