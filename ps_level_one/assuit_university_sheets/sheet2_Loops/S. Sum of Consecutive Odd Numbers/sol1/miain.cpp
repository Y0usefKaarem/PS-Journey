#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int test;
    cin >> test;

    long long x = 0, y = 0;

    while(test--)
    {
        long long sum = 0;

        cin >> x >> y;

        long long cp = x;
        long long cp2 = y;

        if (x > y)
        {
            for (int i = x; i > y; i--)
            {
                if(i!=cp)
                {
                    if(i % 2!= 0)
                       sum += i;
                }
            }
        }

        else
        {
            for (int i = y ; i > x ; i--)
            {
                if(i!=cp2)
                {
                    if(i % 2!= 0)
                       sum += i;
                }
            }

        }
        cout << sum << endl;
    }

    return 0;
}
