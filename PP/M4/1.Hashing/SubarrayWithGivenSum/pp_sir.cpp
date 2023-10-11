// Given : int arr[n]. Return 'true' if there is a subarray with sum == 0.
#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    int arr[] = {1,2,3,-6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int psum = 0;
    unordered_map <int, int> m;

    m.insert({psum,1});

    bool present = false;

    for(int i = 0; i < n; i++){
        psum += arr[i];
        if(m.find(psum) != m.end()){
            cout << "True" << endl;
            present = true;
            break;
        }
        m.insert({psum, 1});
    }
    
    if(!present) cout << "False" << endl;

    return 0;
}