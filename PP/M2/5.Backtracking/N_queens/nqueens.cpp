#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> arr;
int n, count = 0;

// isSafe function tracks whether some other queen is already placed in the same column or along both the diagonals.
bool isSafe(int i, int j){
    int x = i-1;
    while(x >= 0){
        if(arr[x][j] == 1) return false; // upward check(in the same column)
        x--;
    }
    x = i-1;
    int y = j-1;
    while(x >= 0 && y >= 0){
        if (arr[x][y] == 1) return false; // check along primary diagonal
        x--,y--;
    }
    x = i-1, y = j+1;
    while (x >= 0 && y < n){
        if (arr[x][y] == 1) return false; // check along secondary diagonal
        x--,y++;
    }
    return true;
}

void printNQ(int r){
    if(r == n){ // termination condition --> all the 'n' queens are placed successfully
        // print the boolean matrix.
        count++;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cout<< arr[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        return;
    }
    for(int c = 0; c < n; c++){
        // Check if current position is safe from attacks
        if(isSafe(r,c)){
            arr[r][c] = 1; // Place a queen at (r,c)
            printNQ (r+1); // Recurse for the next row
            arr[r][c] = 0; // Backtrack: Remove the queen.
        }
    }

}

int main(){
    cin >> n;
    arr.resize(n,vector<int>(n,0)); // resize the vector.
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < n; j++){
    //         cout<< arr[i][j] << " ";
    //     }
    // }

    printNQ(0);
    
    if (count == 0){
        cout << "No possible configuration." << endl;
    }
    else{
        cout << "Number of possible configurations are --> " << count << "." << endl;
        cout << "Above matrices show the configurations." << endl;
        cout << "1 denotes queen placed and 0 denotes queen not placed." << endl;
        cout << endl;
    }
    return 0;
}