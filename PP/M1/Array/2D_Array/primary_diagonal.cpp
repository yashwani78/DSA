//Sum of Primary diagonal, Sum of Secondary diagonal and sum of both diagonals.

#include <iostream>
using namespace std;

int main(){
    int n,i,j;
    cin >> n >> n;
    int a[n][n];
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
        int primary_sum = 0;
    for(i = 0; i < n; i++){
        primary_sum += a[i][i];
    }
    cout << "Primary diagonal sum = " << primary_sum << endl;

        int secondary_sum = 0;
    for(i = 0, j = n-1; i < n; i++ , j--){
        secondary_sum += a[i][j];
    }
    cout << "Secondary diagonal sum = " << secondary_sum << endl;

    int sum_of_diagonals = 0 ,mid;
    
    mid = ((n+1)/2) -1;
    
    if(n % 2 == 0){
        sum_of_diagonals = primary_sum + secondary_sum;
    }
    else{
        sum_of_diagonals = (primary_sum + secondary_sum) - a[mid][mid];
    }
    cout << "Sum of diagonals = " << sum_of_diagonals << endl;

    return 0;
}