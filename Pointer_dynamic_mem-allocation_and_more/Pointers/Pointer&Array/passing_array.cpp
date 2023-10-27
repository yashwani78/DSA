#include <iostream>
using namespace std;

int getSum(int arr[], int n){
    int sum = 0;
    
    cout << "Size: " << sizeof(arr) << endl; // This will print the size of pointer(4 in this pc).

    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    
    cout << getSum(arr,5) << endl;

    cout << getSum((arr+3),2) << endl;
    return 0;
}