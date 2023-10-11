#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,3,2,5,7};
    int* p = arr; // or (int* p = &arr[0])
    // int * p stores the address.
    for(int i = 0; i < 5; i++){
        // cout << arr << endl;
        // arr += 1;( or arr++) this can't be done because by default arr is of constant type
        // and constant type variables cann't be modified.
        // instead we can take the output like this
        cout << *(arr+i) << " "; 
    }
    cout << endl;
    
        // or

    for(int i = 0; i < 5; i++){
        cout <<  *(p+i) << " ";       
    }
    cout << endl;

    //another example of const type variable is
    const int a = 7;
    //in the above expression the value of 'a' cann't be modified as it is
    //declared as a constt integer
    return 0;
}