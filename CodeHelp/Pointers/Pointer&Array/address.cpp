#include <iostream>
using namespace std;
int main(){
    int arr[10] = {43, 54, 234, 345, 55};
    cout << arr << endl;
    cout << sizeof(arr) << endl;
    int *p = &arr[0];

    cout << sizeof(p) << endl;
    cout << sizeof(*p) << endl;
    cout << sizeof(arr[0]) << endl;
    
    return 0;
}