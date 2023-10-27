/**
 * Problem: Given an arr[n]. Find previous smaller element of each element and store them in "pse[n]" array.
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr = {10,7,4,2,9,10,11,3,2};
    vector<int> pse(arr.size()); // pse : previous smaller element.
    for(int i = arr.size() - 1; i >= 0; i--) {
        bool pseFound = false;
        for(int j = i-1; j >= 0; j--) {
            if(arr[j] < arr[i]) {
                pse[i] = arr[j];
                pseFound = true;
                break;
            }
        }
        if(!pseFound) pse[i] = -1;
    }

    for(int val : pse) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}