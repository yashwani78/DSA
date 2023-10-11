#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k, x;
    cin >> k >> x;
    for(int i = 0; i < n-k+1; i++){
        int frequency = 0;
        for (int j = i; j < i+k+1; j++){
            if (arr[j] == x){
                frequency++;
            }
        }
        cout << frequency << " ";
    }
    return 0;
}