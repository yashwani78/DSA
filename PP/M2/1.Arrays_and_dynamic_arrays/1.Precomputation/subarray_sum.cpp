// bruteforce approach of prefix sum.

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
   
    int l,r,Q;
    cin >> Q; // Q is number of queries.
    for (int i = 0; i < Q ; i++){
        cin >> l >> r;
        int sum = 0;
        for(int j = l; j <= r; j++){
            sum += arr[j];
        }
        cout << sum << endl;
    }
    
    return 0;
}