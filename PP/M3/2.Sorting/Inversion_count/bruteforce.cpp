#include <iostream>
using namespace std;
int main(){
    int cnt = 0;
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if(arr[i] > arr[j])
                cnt++;
        }
    }
    cout << cnt << endl;
    cout << n << endl; //Verify the length of array.
}