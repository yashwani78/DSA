// Given : int arr[n]. Return 'true' if there is a subarray with sum == 0.
#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    int arr[] = {1,2,3,-6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int psum[n];
    psum[0] = arr[0];
    for (int i = 1; i < n; i++){
        psum[i] = arr[i] + psum[i-1];
    }
    bool present = false;
    unordered_map<int, int> m;
    m[0] = 1;
    for(int i = 0; i < n; i++){
        if(m.find(psum[i]) != m.end()){
            cout << "True" << endl;
            present = true;
            break;
        }
        m[psum[i]] = 1;
    }
    if(!present) cout << "False" << endl;

    return 0;
}