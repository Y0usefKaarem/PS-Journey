#include <iostream>
using namespace std;

// using for loop
int main()
{
    int s, x, odd=0, even=0, pos=0, neg=0;
    cin >> s;

    for (int i=1; i<=s; i++)
    {
        cin >> x;

        if (x>0) pos++;
        if (x<0) neg++;
        if (x%2==0) even++;
        if (x%2!=0) odd++;
    }

    cout << "Even:  " << even << "\n";
    cout << "Odd:  " << odd << "\n";
    cout << "Positive:  " << pos << "\n";
    cout << "Negative:  " << neg << "\n";

    return 0;
}
