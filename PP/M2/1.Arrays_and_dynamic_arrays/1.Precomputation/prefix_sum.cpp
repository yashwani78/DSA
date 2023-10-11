#include <iostream>
using namespace std;

/*  To find the sum of the subarray between two given indices 'l' & 'r' for 'Q'queries.

=>  Bruteforce approach: Run a for loop for every query and calculate the sum for each subarray.
    code is titled 'subarray_sum' and is saved in the same folder.

=>  Optimized approach: Create an array containing the prefix sum till each index point. This code is
    using this approach. In the same way we can create an array of prefix max to find the maximum 
    till each index.*/

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    /*  for loop below forms a prefix sum array in the existing array 
        i.e.(original array tampered).*/
    // for (int i = 1; i < n; i++){
    //     arr[i] = arr[i]+arr[i-1];
    // }
    //  below is the code to form the prefix sum array inside new array (without tampering original array)
    int prefix_sum[n];
    for (int i = 1; i < n; i++){
        prefix_sum[i] = arr[i]+arr[i-1];
    }
    int l,r,Q;
    cin >> Q;
    for (int i = 0; i < Q ; i++){
        cin >> l >> r;
        int sum = 0;
        if(l == 0){
            cout << prefix_sum[r] << endl;
        }
        else{
        sum = prefix_sum[r] - prefix_sum[l-1];
        cout << sum << endl;
        }
    }
    // for loop below prints the prifix sum array.
    
    for (int i = 0; i < n; i++){
        cout << prefix_sum[i] << " ";
    }
    return 0;
}