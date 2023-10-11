#include <iostream>
using namespace std;

int findPeak(int arr[], int low, int high){
    int n = high + 1;

    while (low <= high){
        int mid = (high + low)/2;
        if (arr[mid] == 0){
            if(arr[mid] >= arr[mid+1])
                return mid;
            else
                low = mid + 1;
        }
        else if (arr[mid] == n-1){
            if(arr[mid] >= arr[mid-1])
                return mid;
            else
                high = mid - 1;
        }
        else{
            if (arr[mid] >= arr[mid+1] && arr[mid] >= arr[mid-1])
                return mid;
            else if (arr[mid] >= arr[mid+1] && arr[mid] < arr[mid-1])
                high = mid - 1;
            else
                low = mid + 1;
        }

    }
    return -1;
}

int main(){
    int n; 
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int peak = findPeak(arr, 0, n-1);
    if (peak == -1){
        cout << "No peak element" << endl;
    }
    else {
        cout << arr[peak] << endl;
    }
    return 0;
}