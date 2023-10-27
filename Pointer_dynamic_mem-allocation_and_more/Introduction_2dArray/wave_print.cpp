#include <iostream>
using namespace std;

void wavePrint(int arr[][3], int row, int col){
    for(int i = 0; i < row; i++){
        if (i % 2 == 0){
            for(int j = 0; j < col; j++){
                cout << arr[j][i] << " ";
            }
        }
        else{
            for (int j = col-1; j >= 0; j--){
                cout << arr[j][i] << " ";
            }
        }
    }
    return;
}

int main(){
    int mat[3][3] = {1,6,7,2,5,8,3,4,9};

    wavePrint(mat,3,3);
    cout << endl;
    return 0;
}