#include <iostream>
using namespace std;

int main(){
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    cout << *(arr[0]+5) << endl;
    int* p = arr[2];
    cout << *(p-2) << endl;
    return 0;
}