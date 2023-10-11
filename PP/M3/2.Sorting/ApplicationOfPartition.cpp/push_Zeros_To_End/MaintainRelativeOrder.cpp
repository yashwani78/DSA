#include<iostream>
#include<vector>
using namespace std;

/*Given : int arr[n]. Push all the zeros to the end of the array.
using bruteforce approach the relative order of the elements is maintained.
*/

void partition(vector<int>&arr, int i, int j){
    int cnt = 0;
    while(i < arr.size()){
        while(i < arr.size() && arr[i] != 0){
            cnt++;
            i++;
        }
        while(i < arr.size() && arr[i] == 0){
            i++;
        }
        if(i < arr.size()){
            swap(arr[cnt], arr[i]);
            cnt++;
        }
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