#include <iostream>
using namespace std;

int main(){
    int row, col;
    cin >> row >> col;

    int ** mat = new int* [row];
    for (int i = 0; i < row; i++){
        mat[i] = new int [col];
    }
    //2d array created.

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cin >> mat[i][j];
        }
    }
    //input taken.

    cout << endl;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    // output taken.

    /*  Note: When allocation memory from heap (i.e. dynamically), memory doesn't get released
    automatically as in case of static allocation(stack memory). we need to free it manually.*/

    // releasing memory.
    for (int i = 0; i < row; i++){
        delete mat[i];
    }
    delete mat;

    return 0;
}