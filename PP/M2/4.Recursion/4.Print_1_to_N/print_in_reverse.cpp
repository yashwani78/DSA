#include <iostream>
using namespace std;

// Reverse order.
void rev (int n){
    if (n < 1)
    return;
    cout << n << " ";
    rev(n-1);
}

// Ascending order.
void asc (int n){
    if (n < 1)
    return;
    asc(n-1);
/* Note: When a function is called(by value), a copy of the varibles is created inside 
the called function and hence the change isn't reflected in the parent function. */

    cout << n << " ";
}

int main(){

    int x;
    cin >> x;
    rev(x);
    cout << endl << endl;
    asc(x);
    cout << endl;

    return 0;
}