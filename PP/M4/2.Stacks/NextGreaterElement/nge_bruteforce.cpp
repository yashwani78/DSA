/**
 * Problem: Given an arr[n]. Find next greater element of each element and store them in "nge[n]" array.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {10,7,4,2,9,10,11,3,2};
    vector<int> nge(arr.size()); // nge : next greater element.

    for(int i = 0; i < arr.size(); i++) {
        bool ngeFound = false;
        for(int j = i+1; j < arr.size(); j++){
            if(arr[j] > arr[i]) {
                nge[i] = arr[j];
                ngeFound = true;
                break;
            }
        }
        if(!ngeFound) nge[i] = -1;
    }

    for(int val : nge) {
        cout << val << " ";
    }

    cout << endl;
    return 0;
}