#include <iostream>
using namespace std;

int main()
{
    // int arr[5] = {1,2,3,4,5};
    // char ch[6] = "abcde";

    // cout << "arr: " << arr << endl;  // Prints address of arr[0].
    // cout << "ch: " << ch << endl;   // Prints complete string.

    // char *c = &ch[1];
    // cout << "c : " << c << endl;  // Prints the string starting with the index pointed by the pointer

    // // in case of string, the printing terminates when null character is reached, but what if no null character is present?
    // // example below :

    // char temp = 'z';
    // char *ptr = &temp;

    // cout << "ptr: " << ptr << endl;
    // cout << "&temp : " << &temp << endl;
    char temp[] = "z";
    char *ptr = temp;

    cout << ptr << endl;
    cout << (void *)ptr << endl;
    
    //note : to print the address of elements of a string , we use (void *) before the & operator.

    cout << "Address of temp[0]: " << (void *)&temp[0] << endl;

    return 0;
}