/**
 * Problem: Given an arr[n]. Find previous smaller element of each element and store them in "pse[n]" array.
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr = {10,7,4,2,9,10,11,3,2};
    vector<int> pse(arr.size()); // pse : previous smaller element.
    stack<int> stk;
    stk.push(arr.size()-1);

    for(int i = arr.size()-2; i >= 0; i--) {
        while(!stk.empty() && arr[i] < arr[stk.top()]) {
            pse[stk.top()] = arr[i];
            stk.pop();
        }
        stk.push(i);
    }
    while(!stk.empty()) {
        pse[stk.top()] = -1;
        stk.pop();
    }

    for(int val : pse) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}