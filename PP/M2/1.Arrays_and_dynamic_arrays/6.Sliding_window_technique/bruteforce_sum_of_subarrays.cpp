#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k, sum = 0;
    cin >> k;
    for (int i = 0; i < n-k+1; i++){
        for (int j = i; j < i+k; j++){
            sum += arr[j];
        }
    }
    cout << sum << endl;
    return 0;
}