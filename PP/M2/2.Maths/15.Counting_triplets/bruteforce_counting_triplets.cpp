#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int count = 0;
    int m;
    cin >> m;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            for (int k = j+1; k < n; k++){
                if ((arr[i]+arr[j]+arr[k]) % m == 0){
                    cout << i << " " << j << " " << k << endl;
                    cout << arr[i] << "," << arr[j] << "," << arr[k] << endl;
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}