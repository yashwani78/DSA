#include <iostream>
#include <vector>
using namespace std;
/*This is the leetcode question in which it asks to return a vector of vector of strings*/

vector<string> arr;// Globally declared and resized in the main function.
int n, count = 0;

// isSafe function tracks whether some other queen is already placed in the same column or along both the diagonals.
bool isSafe(int i, int j){
    int x = i-1;
    while(x >= 0){
        if(arr[x][j] =='Q') return false; // upward check(in the same column)
        x--;
    }
    x = i-1;
    int y = j-1;
    while(x >= 0 && y >= 0){
        if (arr[x][y] == 'Q') return false; // check along primary diagonal
        x--,y--;
    }
    x = i-1, y = j+1;
    while (x >= 0 && y < n){
        if (arr[x][y] == 'Q') return false; // check along secondary diagonal
        x--,y++;
    }
    return true;
}

vector<vector<string>> printNQ(int r){
    vector<vector<string>> ans;

    if(r == n){ // termination condition --> all the 'n' queens are placed successfully
        // print the boolean matrix.
        count++;
        ans.push_back(arr);
        return ans;
    }
    // if termination condition is not reached, recurse like below.
    for(int c = 0; c < n; c++){
        if(isSafe(r,c)){
            arr[r][c] = 'Q';
            vector<vector<string>> res = printNQ (r+1);
            ans.insert(ans.end(), res.begin(), res.end()); // Merge 'res' string and 'ans' string.
            arr[r][c] = '.';
        }
    }
    return ans;
}

int main(){
    cin >> n;
    arr.resize(n,string(n,'.')); // to resize the vector.

    vector<vector<string>> ans = printNQ(0);
    int size = ans.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for(int k = 0; k < n; k++){
                cout << ans[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl << endl;
    }
    // cout << "Number of configurations: " << ans.size() << endl;
    return 0;
}