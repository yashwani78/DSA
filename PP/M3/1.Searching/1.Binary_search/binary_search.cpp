#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int target){

    while(start <= end){
        int mid = (start + end) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            start = mid + 1;
        
        if (arr[mid] > target)
            end = mid - 1;
        
    }
    return -1;
    
}

int main(){
    int arr[] = {1,23,34,36,54,68,69,73,98};
    int key;
    cin >> key;
    int size = sizeof(arr)/sizeof(arr[0]);

    int index = binarySearch(arr, 0, size-1,key);

    if(index < 0)
    cout << "Not found " << endl;
    else
    cout << "Key is found at index " << index << endl;

    return 0;
}