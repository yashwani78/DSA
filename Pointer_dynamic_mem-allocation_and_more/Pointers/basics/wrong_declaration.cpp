#include <iostream>
using namespace std;

int main(){
    int *p; // Bad practice. pointer will point to some garbage address.
    cout <<"Some garbage value (printing *p): " << *p << endl;

    int i = 9;
    int *x = 0; // This will give a segmentation fault.

    x = &i; // Not *x = &i;

    cout << *x << endl;

    /*To eliminate such conditions, we should always initialize the values of pointers.*/

    return 0;
}