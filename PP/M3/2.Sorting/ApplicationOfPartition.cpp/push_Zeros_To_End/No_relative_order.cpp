#include <iostream>
#include <vector>
using namespace std;

/*  Given : int arr[n]. Push all the zeros to the end of the array.
    In this approach, we are simply using the partition technique. Using this technique
    does not ensure the relative order of the elements. */

void partition(vector<int> &v, int l, int r){
    while (l <= r){
        while(l < v.size() && v[l] != 0){
            l++;
        }
        while(l >= 0 && v[r] == 0){
            r--;
        }
        if(l < r){
            swap(v[r], v[l]);
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