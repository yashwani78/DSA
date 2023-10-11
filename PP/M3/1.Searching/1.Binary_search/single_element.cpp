#include <iostream>
using namespace std;

int find_Single_Element(int arr[], int n){
    int low = 0, high = n-1;

    if(low == high) // When there is just one element in the array.
        return 0;

    while (low <= high){
        int mid = (low + high)/2;

        if(mid == 0){
            if(arr[mid] != arr[mid + 1]){
                return mid;
            }
            else
                low = mid + 1;
        }
        else if(mid == n-1){
            if (arr[mid] != arr[mid - 1])
                return mid;
            else 
                high = mid - 1;
        }

        else if (arr[mid-1] != arr[mid] && arr[mid] != arr[mid+1])
            return mid;
        else{
            int fo, so;
            if (arr[mid] == arr[mid + 1]){
                fo = mid;
                so = mid + 1;
            }
            else{
                fo = mid - 1; 
                so = mid;
            }
            if (fo % 2 == 0)
                low = mid + 1;
            else{
                high = mid - 1;
            }
        }   
    }
    return -1;
}

int main(){
    int n;
    cin >> n;

    int* arr = new int[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ans = find_Single_Element(arr, n);
    cout << arr[ans] << endl;
}