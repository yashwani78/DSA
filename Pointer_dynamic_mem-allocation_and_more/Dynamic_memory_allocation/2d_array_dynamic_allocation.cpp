#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int** arr = new int* [n]; // declares number of rows

    for (int i = 0; i < n; i++){
        arr[i] = new int[n];
    }// declares number of cols.

    // 2d array created inside heap memory.


    // taking input.
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    cout << endl;
    // taking output.
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << sizeof(arr) << endl;

    /*  Note: When allocation memory from heap (i.e. dynamically), memory doesn't get released
    automatically as in case of static allocation(stack memory). we need to free it manually.*/

    // releasing memory.
    for (int i = 0; i < n; i++){
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}