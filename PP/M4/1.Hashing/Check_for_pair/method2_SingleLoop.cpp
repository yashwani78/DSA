/*Problem: Given -> int arr[n], int x. Return true if there exists a pair with sum = x.*/
#include<iostream>
#include<unordered_map>
using namespace std;
// Single for loop method.
int main(){
    int arr[] = {2,3,5,6,6,4,9};
    unordered_map<int , int> m;
    int x;
    cin >> x;
    int n = sizeof(arr)/ sizeof(arr[0]);
    bool isPresent = false;
    for (int i = 0; i < n; i++){
        if(m.find(x-arr[i]) != m.end()){ 
            cout << "True" << endl;
            isPresent = true;
            break;
        }
        m[arr[i]] = 0;
    }
    if(!isPresent) cout << "False" << endl;
    return 0;
}