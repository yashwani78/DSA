#include <iostream>
using namespace std;
int main(){
    int* i = new int;

/* new keyword allocates the size in the heap memory and returns the address 
 of that memory location which we have to store in a pointer variable.*/

    cin >> *i;

    cout << *i  << ", " << "Size of i is " << sizeof(i) << endl;
    cout << i << endl;

    /*Similarly, to store characters, do as below.*/
    char* ch = new char;

    *ch = 'a';
    cout << *ch << endl;

    return 0;
}