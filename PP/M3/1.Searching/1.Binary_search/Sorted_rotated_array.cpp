#include <iostream>
using namespace std;

// Finding pivot
int findPivot(int arr[], int low, int high){
    int n = high + 1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] <= arr[n-1])
            high = mid - 1;
        else{
            if(arr[mid] > arr[mid+1])
                return mid;
            else 
                low = mid + 1;
        }
    }
    return -1;
}

int findKey(int arr[], int low, int high,int key){
    int n = high + 1;
    int m = findPivot(arr, low, high);
    if (m >= 0){ // Check if findPivot function has returned some valid value of pivot.
        if(arr[n-1] == key){
            return (n-1);
        }
        else if(arr[n-1] < key){
            high = m;
            low = 0;
        }
        else{
            low = m + 1;
            high = n-1;
        }
    }
    while(low < high){
        int mid = (low + high)/2;
        if (arr[mid] == key)
            return mid;
        else if( arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
}

int main (){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int key;
    cin >> key;

    int index = findKey(arr,0,n-1,key);
    cout << index << endl;

    return 0;
}