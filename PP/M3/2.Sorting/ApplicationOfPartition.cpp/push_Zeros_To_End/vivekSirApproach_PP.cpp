#include<iostream>
#include<vector>
using namespace std;

/*Given : int arr[n]. Push all the zeros to the end of the array.
using bruteforce approach the relative order of the elements is maintained.
This approach is given by VIVEK sir. This looks more elegant than that of mine.*/

void partition(vector<int>&arr, int i, int j){
    int cnt = 0;
    while(i < arr.size()){
        if(arr[i] != 0){
            if(i != cnt){
                swap(arr[i], arr[cnt]);
            }
            cnt++;
        }
        i++;
    }
    return;
}

int main(){
    vector<int> v(10);
    for (int i = 0; i < v.size(); i++){
        cin >> v[i];
    }
    partition(v,0,v.size()-1);
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}