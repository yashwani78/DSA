/**
 * Problem: Given an arr[n]. Find next greater element of each element and store them in "nge[n]" array.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {6,2,3,4,2,6};
    stack<int> stk;
    vector<int> nge(arr.size()); // nge : next greater element.
    stk.push(0);
    for(int i = 1; i < arr.size(); i++) {
        while(!stk.empty() && arr[i] > arr[stk.top()]) {
            nge[stk.top()] = arr[i];
            stk.pop();
        }
        stk.push(i);
    }
    while(!stk.empty()) {
        nge[stk.top()] = -1;
        stk.pop();
    }

    for(int val : nge) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}