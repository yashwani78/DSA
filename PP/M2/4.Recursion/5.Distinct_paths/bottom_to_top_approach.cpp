#include <iostream>
using namespace std;

/*Prob: Given--> m*n grid. find number of distinct paths to move from (0,0) to (m-1,n-1).
The approach below uses integer returning returning function.

To solve here we assume (m-1, n-1) as source & (0,0) as destination.*/

/* Bottom to top approach.*/

int countpaths(int i,int j){
    if(i == 0 || j == 0) return 1;
    return countpaths (i,j-1)+countpaths(i-1,j);
}

int main(){
    int m,n;
    cin >> m >> n;
    int cnt = countpaths(m-1,n-1);
    cout << cnt << endl;
    return 0;
}