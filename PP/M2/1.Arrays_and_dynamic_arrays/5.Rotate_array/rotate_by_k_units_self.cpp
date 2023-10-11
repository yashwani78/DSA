#include <iostream>
using namespace std;
// This code is self written. and is not optimized.
int main(){
    int n,k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> k;
    if (k > n){
        k = k%n;
        cout <<"Updated K is : " << k << endl;
    }
    int tmp[k];
    for (int i = 0; i < k; i++){ // This loop stores the last 'k' elements of original array inside tmp array.
        tmp[i] = arr[n-k+i];
    }
    for (int i = n-1; i >= k; i--){  // this loop slides the elements in the original array by 'k' units.
        arr[i] = arr[i-k];
    }
    for (int i = 0; i < k; i++){ // this loop copies the elements from the tmp array to the initial 'k'indices of the original array.
        arr[i] = tmp[i];
    }
    for (int i = 0; i < n; i++){ // prints the rotated array.
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}