/*Ques: Given: int arr[n], q queries of the form x. Return true if 'x' is present in the array otherwise false.*/

#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    // int n;
    // cin >> n;
    int arr[] = {4,2,5,7,4,3,4,5,6,4,6,7,56,343,45456,456,435,34,43};
    // for (int i = 0; i < n; i++){
    //     cin >> arr[i];
    // }
    int q;
    cin >> q;
    unordered_map<int, int> m;
    for(int i = 0; i < n; i++){
        m[arr[i]] = 0;
    }
    while (q--){
        int x;
        cin >> x;
        if(m.find(x) != m.end()) cout << "True";
        else cout << "False";
    }
    return 0;
}
