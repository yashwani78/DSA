#include <iostream>
using namespace std;

/*Prob: Given--> m*n grid. find number of distinct paths to move from (0,0) to (m-1,n-1).
The approach below uses void function instead of the integer returning function*/

// Top to bottom approach.

int cnt = 0; // Global declaration.

void countpaths(int i, int j, int n, int m){

    if (i == m-1 || j == n-1){
        cnt++;
        return;
    }
    countpaths (i,j+1,n,m);
    countpaths (i+1,j,n,m);

}
int main(){
    int m,n;
    cin >> m >> n;
    countpaths(0,0,n,m);
    cout << cnt << endl;
    return 0;
}