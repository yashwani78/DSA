#include <iostream>
using namespace std;
int main(){
    int n;
    long long k;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> k;
    for (int i = 0; i < k%n; i++){
        int tmp = arr[n-1];
        for (int j = n-1; j > 0; j--){
            arr[j] = arr[j-1];
        }
        arr[0] = tmp;
    }
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}