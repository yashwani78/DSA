#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
/* To find maximum till the given index 'idx', for 'Q' queries.
    =>  Bruteforce approach: Run a for loop for each query to find the max till the given index.
    =>  Optimized approach: Form an array containing at each index the maximum till that index.
        You can either create another array or store the prefix max in the same array.*/
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int maxm = INT_MIN;
    /*  for loop below forms a prefix max array in the existing array 
        i.e.(original array tampered).*/
    // for (int i = 0; i < n; i++){
    //     if(arr[i] > maxm)
    //         maxm = arr[i];
    //     else
    //         arr[i] = maxm;
    // }
    // cout << maxm << endl;

    // cout << "Prefix max array : ";
    // for (int i = 0; i < n; i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    //  below is the code to form the prefix max array inside new array (without tampering original array)
    int prefix_max[n];
    // for(int i = 0; i < n; i++){
    //     if(arr[i] > maxm)
    //     maxm = arr[i];
    //     prefix_max[i] = max(maxm,arr[i]);
    //     /* we can replace the above line with the below line
    //     prefix_max[i] = maxm;  */
    // }
    /*  The same prefix max array is created by vivek sir in a different way.
        Below is the code. For this we don't need the maxm variable.*/
        prefix_max[0] = arr[0];
        for(int i = 1; i < n; i++){
            prefix_max[i] = max(prefix_max[i-1],arr[i]);
        } 

    for(int i = 0; i < n; i++){
        cout << prefix_max[i] << " ";
    }
    cout << endl;
    int idx,Q;
    cin >> Q;
    for (int i = 0; i < Q; i++){
        cin >> idx;
        cout << prefix_max[idx] << endl;
    }

    return 0;
}