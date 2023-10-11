#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int tmp[n];
    // This code is more optimized than the self written.
    for(int i = 0; i < n; i++){
        tmp[(i+k)%n] = arr[i];
    }
     for (int i = 0; i < n; i++){
        cout << tmp[i] << " ";
    }
    cout << endl;
    return 0;
}