// Given : int arr[n], int k. Return 'true' if there is a subarray with sum == k.
#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    int arr[] = {1,2,3,-6};
    int k;
    cin >> k;
    int n = sizeof(arr)/sizeof(arr[0]);
    int psum = 0;
    unordered_map <int, int> m;

    m.insert({psum,1});

    bool present = false;

    for(int i = 0; i < n; i++){
        psum += arr[i];
        if(m.find(psum - k) != m.end()){ // Line of difference from code where given sum was == 0;
            cout << "True" << endl;
            present = true;
            break;
        }
        m.insert({psum, 1});
    }
    
    if(!present) cout << "False" << endl;

    return 0;
}