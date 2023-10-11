#include <bits/stdc++.h>
using namespace std;

/*  Given an m x n matrix mat and an integer k, print a matrix answer where each answer[i][j] is the 
    sum of all elements mat[r][c] for:

i - k <= r <= i + k,
j - k <= c <= j + k, and (r, c) is a valid position in the matrix.

Input Format:   The first line contains three space-separated integers m, n, and k.
                The next m lines of input contain n space-separated integers describing 
                the elements of matrix mat.

Output Format:  Print a matrix answer.

Example:
Input
3 3 1
1 2 3
4 5 6 
7 8 9
Output
12 21 16 
27 45 33
24 39 28           */

int main(){

    int m,n,k;
    cin >> m >> n >> k;

    vector<vector<int>> mat(m,vector<int>(n));
    vector<vector<int>> answer(m,vector<int>(n));

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            int sum = 0;
            for (int r = max(0,(i-k)); r <= min((i+k),(m-1)); r++){
                for (int c = max(0, (j-k)); c <= min((j+k), (n-1)); c++){
                    sum += mat[r][c];
                }
            }
            answer[i][j] = sum;
        }
    }

    
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}