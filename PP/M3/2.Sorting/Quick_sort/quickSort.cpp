#include <iostream>
#include <vector>

using namespace std;

int partition(int arr[],int i, int j){
    vector<int> lesser;
    vector<int> greater;

    int pivot = arr[i];
    for(int k = i+1; k <= j; k++){
        if(arr[k] <= arr[i]) lesser.push_back(arr[k]);
        else greater.push_back(arr[k]);
    }
    int l = 0;
    while(l < lesser.size()){
        arr[i] = lesser[l];
        i++;
        l++;
    }

    arr[i] = pivot;
    int partition_Point = i;
    i++;

    int g = 0;
    while(g < greater.size()){
        arr[i] = greater[g];
        i++;
        g++;
    }
    return partition_Point;
}
// int partition(int arr[], int i, int j) {
//     int pivot = arr[i];
//     int partition_Point = i;

//     for (int k = i + 1; k <= j; k++) {
//         if (arr[k] <= pivot) {
//             partition_Point++;
//             swap(arr[k], arr[partition_Point]);
//         }
//     }

//     swap(arr[i], arr[partition_Point]);

//     return partition_Point;
// }


void quickSort(int arr[], int i, int j){
    if(i < j){ // When the size of the subarray is greater than 1, then only we would move further else return.
        int p = partition(arr,i,j);
        quickSort(arr, i, p-1);
        quickSort(arr, p+1, j);
    }
    return; 
}

int main(){
    int arr[] = {3,1,4,53,2,23,54,5};
    int n = (sizeof arr)/(sizeof arr[0]);

    quickSort(arr, 0, n-1);

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}