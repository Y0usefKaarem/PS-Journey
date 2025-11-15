#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	double r , pi , area;
	pi =  3.141592653;

	cin >> r;

	area = pi * r * r;
	cout << fixed << setprecision(9) << area;

}