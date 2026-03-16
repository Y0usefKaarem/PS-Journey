#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int size; cin >> size;
    long long arr[size] = {};


    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    long long cheak = sizeof(arr)/sizeof(arr[0]);

    long long found; cin >> found;

    for(int index = 0; index < size; index++)
    {
        if (found == arr[index])
        {
            cout << index << endl;
            break;
        }

        else if (found != arr[index])
        {
            if(cheak !=  size){
               continue;  }

        else{
          cout << "-1" << endl;
          break;
        }
        }

    }


    return 0;
}
