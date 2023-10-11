#include <iostream>
using namespace std;

int main(){
    int a[3] = {1,3,5};
    int* p = a;
    cout << p << " " << p+1 << " " << p+2 << endl; // will print the addresses of all the three elements.

    cout << *p << " " << *(p+1) << " " << *(p+2) << endl; // will deference the above values.
    
    cout << p[0] << " " << p[1] << " " << p[2] << endl; // will print the values of the array.

    /*How does the above line work ?
    Actually inside the machine, a[i] is interpreted like *(a+i). Means, the compiler :
    1). First finds the value present at the base address 'a'.
    2). Then takes a jump of 'i' units from there in order to print the value at (a+i).
    3). Then it deferences the value present there i.e. *(a+i).

    In case of the pointers, the same thing is happening. When we write p[1], The compiler 
    1). First finds the value present at 'p' and 
    2). Then jumps at the memory location one unit forward i.e. (p+1) and 
    3). Then deferencees the value present there i.e. *(p+1)
    p[1] = *(p+1) . What we see on the console is not how ACTUALLY the machine works internally.*/
    
    return 0;
}