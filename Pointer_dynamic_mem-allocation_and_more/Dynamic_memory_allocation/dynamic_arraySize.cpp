#include <iostream>
using namespace std;

int getSum(int * arr, int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        // arr is a pointer and we are using pointer arithmetic to calculate the sum by adding the array elements.
        sum+= arr[i];
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    int* arr = new int[n]; // new keyword use to allocate the memory in heap memory

    for (int i = 0; i < n; i++){
        // arr is a pointer and we are using pointer arithmetic to taking input of the array elements.
        cin >> arr[i];
    }

    int ans = getSum(arr,n);

    cout << ans << endl;
    return 0;
    
}