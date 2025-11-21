#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int first = (x / 1000) ; // for the extract the 1st digit 
    if (first % 2 == 0)
        cout << "EVEN";

    else cout << "ODD";
    return 0;

}
