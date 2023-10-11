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
 
    int maxprofit = INT_MIN;
    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++){
            for (int k = j+1; k < n-1; k++){
                for (int l = k+1; l < n; l++){
                    int p = (arr[j] - arr[i]) + (arr[l] - arr[k]);
                    maxprofit = max(p,maxprofit);
                }
                //Wrong approach.
            }
        }
    }
    cout << maxprofit << endl;
    return 0;
}
