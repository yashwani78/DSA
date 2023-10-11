#include <iostream>
using namespace std;

int main(){
    int a = 6;
    int b = a++;
    int c = a;
    cout << b << ", " << c << endl;
    cout << ((c++)+2) << endl;
    cout << (c) << endl;

    return 0;
}