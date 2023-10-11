#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    int tmp[n];
    // In this approach, we need extra space of O(n) to 
    // store the tmp array. This makes this approach less
    // optimized.
    for (int i = 0; i < n; i++){
        tmp[a[i]] = i;
    }
    for (int i = 0; i < n; i++){
        cout << tmp[i] << " ";
    }
    return 0;
}