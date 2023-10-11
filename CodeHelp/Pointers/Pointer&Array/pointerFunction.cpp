#include <iostream>
using namespace std;

void update (int *p){
    p = p+1;    // This will not increment the value of ptr in the main function.
    *p = *p + 1; // This will increment the value of a in main function.
}

int main(){
    int a = 8;
    int *ptr = &a;

    cout << "Before ptr: " << ptr << endl;
    cout << "Before *ptr: " << *ptr << endl;

    update(ptr);

    cout << "After ptr: " << ptr << endl;
    cout << "After *ptr: " << *ptr << endl;
    return 0;
}