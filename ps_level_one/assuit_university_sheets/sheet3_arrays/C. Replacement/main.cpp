#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int size; cin >> size;
    long long arr[size] = {};


    for(int i = 0; i < size ; i++)
    {
        cin >> arr[i];
        if (arr[i] > 0){
            arr[i] = 1;
        }
        else if (arr[i] < 0){
            arr[i] = 2;
        }
        else arr[i] = 0;
    }
    for(int i = 0; i < size; i++){
            cout << arr[i] << " ";
    }


    return 0;
}
