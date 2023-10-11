#include <iostream>
using namespace std;

int main(){
    int arr[5] ={1 , 2 , 3, 4 , 5};
    cout << &arr[0] << " " << &arr[1] << " " << &arr[2] << " " << &arr[3] << " " << &arr[4] << " " << endl;
    for (int i = 0; i < 5; i++){
        cout << &arr[i] << " ";
    }
    cout << endl;
    return 0;
}