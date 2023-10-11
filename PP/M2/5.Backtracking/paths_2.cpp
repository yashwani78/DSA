#include <iostream>
using namespace std;

bool isSafe( int matrix[][3], int i, int j){
    if(i>=3 || j>=3 || j<0 || i<0 || matrix[i][j] == -1 )
        return false;
    else
        return true;
}

int countPaths(int matrix[][3],int isVis[][3], int i, int j){
    if(matrix[i][j] ==2)
        return 1;

    isVis[i][j] = 1;    //Mark visited.
    int sum = 0;

    if (isSafe(matrix,i,j+1) && !isVis[i][j+1]) //rightward move
        sum += countPaths(matrix,isVis, i,j+1);
    
    if (isSafe(matrix,i,j-1) && !isVis[i][j-1]) //leftward move
        sum += countPaths(matrix,isVis, i,j-1);
    
    if (isSafe(matrix,i+1,j) && !isVis[i+1][j]) //downward move
        sum += countPaths(matrix,isVis, i+1,j);
    
    if (isSafe(matrix,i-1,j) && !isVis[i-1][j]) //upward move
        sum += countPaths(matrix,isVis, i-1,j);
    
    isVis[i][j] = 0;    // Unmark visited(backtrack)
    return sum;

}

int main(){
    int matrix[3][3] = {{0,1,0},{0,-1,0},{0,2,-1}};
    int isVis[3][3] = {0};

    int paths = countPaths(matrix, isVis, 0, 1);
    cout << paths << endl;
    return 0;
}