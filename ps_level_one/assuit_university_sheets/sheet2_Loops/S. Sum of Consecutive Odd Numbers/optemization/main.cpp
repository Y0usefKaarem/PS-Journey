#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int t; cin >> t;

    while(t--)
    {
        int x, y; cin >> x >> y; // excluding 5  =>  6

        long long sum = 0;

        for(int i = min(x,y) + 1; i < max(x,y); i++)
        {
            if(i % 2 == 1){
                sum += i;
            }
        }
        cout << sum << endl;
    }


    return 0;
}
