#include <iostream>
using namespace std;

bool isPresent(int** arr, int target, int row, int col){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            if (arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int row = 3;
    int col = 4;

    // dynamically allocating 2d array(preferred when size is decided at run time)
    int** arr = new int*[row];
    for (int i = 0; i < row; i++){
        arr[i] = new int[col];
    }

    // taking input.
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }

    int target;
    cin >> target;

    if(isPresent (arr, target, row, col)){
        cout << "Element found" << endl;
    }
    else{
        cout << "Not found" << endl;
    }

    // deleting memory
    for (int i = 0; i < row; i++){
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}