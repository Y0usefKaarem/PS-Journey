#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int size; cin >> size;

    long long arr [size] = {};

    for(int i = 0; i < size; i++)
    {
        cin >> arr [i];
    }

    int mini = arr[0];
    int pos = 0;

    for(int index = 0; index < size; index++)
    {

        if (mini > arr[index])
        {
            mini = arr[index];
            pos = index;
        }
    }

    cout << mini << " ";
    cout << pos+1;


    return 0;
}
