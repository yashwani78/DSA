#include <iostream>
#include <vector>
using namespace std;

vector<int> temp;
void merge(vector<int> &arr, int s1, int e1, int s2, int e2){
    int i = s1, j = s2, c = s1;
    for( ;i <= e1 && j <= e2; ){
        if(arr[i] < arr[j])
            temp[c++] = arr[i++];
        else 
            temp[c++] = arr[j++];
    }
    while(i <= e1)
        temp[c++] = arr[i++];
    while(j <= e2)
        temp[c++] = arr[j++];

    for(int i = s1; i <= e2; i++)
        arr[i] = temp[i];

}

void mergeSort(vector<int> &arr, int i, int j){
    if(i == j){
        return;
    }
    int mid = (i + j)/2;
    mergeSort(arr, i, mid);
    mergeSort(arr, mid+1, j);
    merge(arr,i,mid,mid+1,j);
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    temp.resize(n);
    mergeSort(arr, 0, n-1);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}