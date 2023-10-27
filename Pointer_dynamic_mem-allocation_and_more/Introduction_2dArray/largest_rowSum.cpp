#include <iostream>
#include <climits>
using namespace std;

int  largestRowSum(int arr[][3], int row , int col){

    int sum = 0,largestSum = INT_MIN;

    for (int i = 0; i < row; i++){
        sum = 0;
        for (int j = 0; j < col; j++){
            sum += arr[i][j];
        }
        largestSum = max(largestSum, sum);
    }
    return largestSum;
}

int main(){
    int arr[3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Largest Row_Sum is : " << largestRowSum(arr,3,3);
    cout << endl;
    return 0;
}