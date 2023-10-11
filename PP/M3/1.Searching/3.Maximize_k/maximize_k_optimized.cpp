#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &arr,int n, int x,int mid){
    if (mid == n+1) return false;
    int sum = 0;
    for (int i = 0; i < mid; i++){
        sum += arr[i];
    }
    if (sum > x) return false;
    else {
        for (int i = mid; i < n; i++){
            sum -= arr[i-mid];
            sum += arr[mid];
            if (sum > x) return false;
        }
    }
    return true;
}

int main(){
    vector<int> arr = {1,2,3,4};
    int n = arr.size();
    int x, ans = 0;
    cin >> x;
    int low = 0, high = n;
    while (low <= high){
        int mid = low + (high-low)/2;
        int r = isPossible(arr,n,x,mid);

        if(!r) high = mid - 1; 
        else {
            int r1 = isPossible(arr,n,x,mid+1);
            if(!r1){
                ans = mid;
                break;
            }
            else low = mid + 1;
        }
    }
    cout << ans << endl;
    return 0;
}