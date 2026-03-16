#include <iostream>
using namespace std;

int main()
{
    int s, x, even=0, odd=0, pos=0, neg=0;
    cin >> s;

    while(s--) // while s > 0 is True
    {
        cin >> x;

        if (x>0) pos++;
        if (x<0) neg++;
        if (abs(x)%2==1) odd++;
        if (x%2==0) even++;
    }

    cout << "Even:  " << even << "\n";
    cout << "Odd:  " << odd << "\n";
    cout << "Positive:  " << pos << "\n";
    cout << "Negative:  " << neg << "\n";

    return 0;
}
