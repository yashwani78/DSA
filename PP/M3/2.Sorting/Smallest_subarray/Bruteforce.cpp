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
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k;
    int sum;;
    int ans = INT_MAX;
    cin >> k;
    for (int i = 0; i < n; i++){
        sum = 0;
        for(int j = i; j < n; j++){
            sum += arr[j];
            if(sum >= k){
                ans = min(ans,j-i+1);
            }
        }
    }
    cout << ans << endl;

    return 0;
}
