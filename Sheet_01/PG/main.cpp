#include <iostream>
using namespace std;
int main ()

// Program summitaion nums from 1 to .. Number entered.
// ex /User enter 3, Program do >> 1+2+3 sum from 1 to 3 & out the result.
{
	long long n, sum ;
	cin >> n ; 

	sum = n * ( n + 1 ) / 2 ;
	cout << sum ;
	return 0;
}