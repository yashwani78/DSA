#include <iostream>
using namespace std;

int find_RepeatedElement(int arr[], int low, int high){
    while (low <= high){
        int mid = (low + high)/2;
        
        if (arr[mid] == mid)
            high = mid - 1;
        else{
            if(arr[mid] == arr[mid + 1]) 
                return arr[mid];
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
    
    int repeatedElement = find_RepeatedElement(arr, 0, n-1);

    if (repeatedElement == -1)
        cout << "No repeated element" << endl;
    else
        cout << repeatedElement << endl;
    
    return 0;
}