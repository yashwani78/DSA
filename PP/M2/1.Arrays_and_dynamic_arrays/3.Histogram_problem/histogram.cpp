#include <iostream>
#include <algorithm>
using namespace std;
/*problem : Given - Heights of 'N' pillars are given in an array. 
            int arr[N] = {0, 1, 0, 2, 1, 3, 0, 2}
            To Find - Total Height of the water trapped in rainfall.
            Refer to the question diagram in the notes. */
int main(){
   int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int pmax[n]; // prefix max
    pmax[0] = arr[0];
    for (int i = 1; i < n; i++){
        pmax[i] = max(arr[i], pmax[i-1]);
    }
    int smax[n]; // suffix max
    smax[n-1] = arr[n-1];
    for (int i = n-2; i >= 0; i--){
        smax[i] = max(arr[i], smax[i+1]);
    }
    int Height = 0; 
    for (int i = 1; i < n-1; i++){
        if(arr[i] < pmax[i-1] && arr[i] < smax[i+1]){
            Height += min(smax[i+1], pmax[i-1]) - arr[i];
        }
    }
    cout << Height << endl;
    return 0; 
}
