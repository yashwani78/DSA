#include <iostream>
#include <climits>
using namespace std;
// bruteforce approach of prefix max.

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
   
    int l,r,Q,idx,max = INT_MIN;
    cin >> Q; // Q is number of queries.
    for (int i = 0; i < Q ; i++){
        cin >> idx;
        for(int j = 0; j <= idx; j++){
            if(arr[j] > max)
            max = arr[j];
        }
        cout << max << endl;
    }
    
    return 0;
}