#include <iostream>
using namespace std;

int main()
{
    // 5
    // 1 8 5 7 5
    // 8 is max

    int s,n,big=-1;
    cin >> s;

    for (int i=1; i<=s; i++)
    {
        cin >> n;
        if(n > big)
        {
            big = n;
        }
    }
    cout << big;
    return 0;
}
