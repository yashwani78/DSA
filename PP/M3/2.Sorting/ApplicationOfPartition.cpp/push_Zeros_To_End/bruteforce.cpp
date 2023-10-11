#include<iostream>
#include<vector>
using namespace std;
/*Given : int arr[n]. Push all the zeros to the end of the array.
using bruteforce approach the relative order of the elements is maintained.*/

int main(){
    vector<int> arr = {3,4,5,2,2,4,0,7,4,0,6,5,0,4,6,0,0,64,4,0,8};
    vector<int> temp;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] != 0){
            temp.push_back(arr[i]);
        }
    }
    for(int i = 0; i < temp.size(); i++){
        arr[i] = temp[i];
    }
    for(int i = temp.size(); i < arr.size(); i++){
        arr[i] = 0;
    }
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
    return 0;
}