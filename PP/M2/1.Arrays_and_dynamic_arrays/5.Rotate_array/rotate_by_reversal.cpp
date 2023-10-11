#include <iostream>
using namespace std;
int* rev_array( int arr[], int m, int n){
    for (int i = m,j = n; i < j; i++,j--){
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
    return arr;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    rev_array(arr,0,n-1-(k%n));
    rev_array(arr,n-(k%n),n-1);
    rev_array(arr,0,n-1);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}