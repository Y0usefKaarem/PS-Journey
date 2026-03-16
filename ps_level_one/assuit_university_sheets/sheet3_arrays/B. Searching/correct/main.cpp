#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int size; cin >> size;
    long long arr[size] = {};

    int element;

    int index  = 0;
    bool found = false;

    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cin >> element;
    for (int i = 0; i < size; i++){
        if(element == arr[i]){
            found = true;
            index = i;
            break;
        }
    }
    if (found == true){
        cout << index;
    }
    else{
        cout << "-1";
    }


    return 0;
}
