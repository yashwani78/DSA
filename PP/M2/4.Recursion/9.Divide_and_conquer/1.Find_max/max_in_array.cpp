#include <iostream>
#include <vector>
using namespace std;

int findMax(vector<int>&arr, int i, int j) {
    if(i == j) {
        return arr[i];
    }
    int m = (i+j)/2;
    // int x = findMax(arr, 0, m);
    // int y = findMax(arr, m+1, j);
    return max(findMax(arr, 0, m), findMax(arr , m+1, j));
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int maxm = findMax(arr, 0, arr.size()-1);
    cout << maxm << endl;
    return 0;
}