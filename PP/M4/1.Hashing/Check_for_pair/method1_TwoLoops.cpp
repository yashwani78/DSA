/*Problem: Given -> int arr[n], int x. Return true if there exists a pair with sum = x.*/
#include<iostream>
#include<unordered_map>
using namespace std;

// two for loops method.
int main(){
    int arr[] = {10,3,5,6,6,4,9};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int x;
    cin >> x;
    unordered_map<int , int> m;

    // Populating the hashtable.    
    for(int i = 0; i < n; i++){
        m[arr[i]]++;
    }
    bool isPresent = false;

    // Searching the element.
    for (int i = 0; i < n; i++){
        if(m.find(x-arr[i]) != m.end()){ 
            int f = arr[x-arr[i]];
            if(arr[i] == x-arr[i] && f>1){
                cout << "True" << endl;
                isPresent = true;
                break;
            }
            else if(arr[i] != x-arr[i]){
                cout << "True" << endl;
                isPresent = true;
                break;
            }
        }
    }
    if(!isPresent) cout << "False" << endl;
    return 0;
}