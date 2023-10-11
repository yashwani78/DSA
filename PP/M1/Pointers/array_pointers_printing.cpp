#include <iostream>
using namespace std;

int main(){
    int arr[7] = {7,9,2,8,0,6,5};
    int* p = arr;
    for (int i = 0; i < 7; i++){
        cout << p+i << " "; // will print the addresses of the a[i] because in the pointer the adresses are stored.
    }                       // 'p' is containing the base address of array.
    cout << endl;
    for (int i = 0; i < 7; i++){ // here we are dereferencing the above values
        cout << *(p+i) << " "; //We can also write 'cout << *(arr+i) << endl'.Both will give the same result.
    }                           //In that case we don't need to initialize the pointer variable.
    cout << endl;
    for (int i = 0; i < 7; i++){
        cout << *(arr+i) << " "; //gives same result as in above loop.
    }
    cout << endl;
    return 0;
}