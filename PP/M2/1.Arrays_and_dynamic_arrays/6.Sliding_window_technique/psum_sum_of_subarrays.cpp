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
    for (int i = 1; i < n; i++){
        arr[i] = arr[i] + arr[i-1];
    }
    for (int i = k-1; i < n; i++){
        if (i == (k-1))
        sum += arr[i];
        else
        sum += (arr[i]-arr[i-k]);
    }
    cout << sum << endl;
    return 0;
}