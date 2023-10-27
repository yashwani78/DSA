#include <iostream>
using namespace std;

void printRowSum(int arr[][3], int row, int col){
    int sum = 0;
    cout <<"Row wise sum : " ;

    for (int i = 0; i < row; i++){
        sum = 0;
        for (int j = 0; j < col; j++){
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    return;
}

void printColSum(int arr[][3], int row, int col){
    int sum = 0;

    cout <<"Col wise sum : " ;
    for (int i = 0; i < row; i++){
        sum = 0;
        for (int j = 0; j < col; j++){
            sum += arr[j][i];
        }
        cout << sum << " ";
    }
    return;
}

int main(){
    int arr[3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    printRowSum(arr,3,3);
    cout << endl;

    printColSum(arr,3,3);
    cout << endl;

    return 0;
}