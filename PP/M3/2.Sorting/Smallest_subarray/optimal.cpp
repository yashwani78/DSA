/*Question : Given :-   int arr[n] , containing +ve elements.
                        int k, 
                        find the length of smallest subarray with sum >= k.*/

#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k;
    int sum;
    int ans = INT_MAX;
    cin >> k;
    // creating prefix sum array.
    for (int i = 1; i < n; i++){
        arr[i] = arr[i] + arr[i-1];
    }
    
    // arr[n] is now converted to prefix sum array.
    for(int i = 0; i < n; i++){
        int low = 0;
        int high = n-1;
        int j;
        while(low <= high){
            int mid = low + (high - low)/2;
            j = mid;
            if(j == 0)
                sum = arr[0];
            else
                sum = arr[j] - arr[i-1];
            if(sum >= k){
                ans = min(ans,j-i+1);
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
    }
    cout << ans << endl;
    return 0;
}