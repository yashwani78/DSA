#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int prefix_min[n];
    // int minimum = INT_MAX;
    // for (int i = 0; i < n; i++){
    //     if (arr[i] < minimum)
    //     minimum = arr[i];
    //     prefix_min[i] = minimum;
    //     /* prefix_min[i] = min(arr[i], minimum); 
    //     (The line above can be used when not using else condition...
    //     in that case, we have to use 'algorithm' header file.)*/
    // }
    /*Vivek sir's approach for prefix min array.*/
    prefix_min[0] = arr[0];
    for (int i = 0; i < n; i++){
        prefix_min[i] = min(prefix_min[i-1],arr[i]); //for this, 'minimum = INT_MAX' variable is not required.
    }

    for (int i = 0; i < n; i++){
        cout << prefix_min[i] << " ";
    }
    cout << endl;
    int Q,idx;
    cin >> Q;
    for(int i = 0; i < Q; i++){
        cin >> idx;
        cout << prefix_min[idx];
    }
    cout << endl;
    return 0;
}