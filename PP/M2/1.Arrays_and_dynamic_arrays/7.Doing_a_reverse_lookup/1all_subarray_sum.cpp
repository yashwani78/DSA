#include <iostream>
using namespace std;
// Brute force aproach
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            for (int k = i; k <= j; k++){
                sum += arr[k];
            }
        }
    }
    cout << sum << endl;
    return 0;
}