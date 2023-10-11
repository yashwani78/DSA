#include <iostream>
using namespace std;

/*Prob: Given--> m*n grid. find number of distinct paths to move from (0,0) to (m-1,n-1).
The approach below uses integer returning returning function.*/

int countpaths(int i, int j, int m, int n){
    if(i == m-1 || j == n-1)
    return 1;
    return countpaths(i, j+1, m, n) + countpaths(i+1, j, m, n);
}

/* Note: We face issues like system crash, stack overflow or tle when run recursive code for
large value of variables.*/

int main(){
    int m,n;
    cin >> m >> n;
    int cnt = countpaths(0,0,m,n);
    cout << cnt << endl;
    return 0;
}