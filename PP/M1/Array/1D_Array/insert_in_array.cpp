#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;         // n =length of the array.
    int arr[n];
    int k;          // k = number of elements inlitially present in the array.
    cin >> k;
    for(int i = 0; i < k; i++){
        cin >> arr[i];
    }
    int x, index;   // x = element to be inserted.
    cin >> x >> index;  // index = index of array where x is to be inserted.
    
    for(int i = (n-1); i >= index; i--){
        arr[i+1] = arr[i];
    }
        arr[index] = x;

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
    return 0;
}