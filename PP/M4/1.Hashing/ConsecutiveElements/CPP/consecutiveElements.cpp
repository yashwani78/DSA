#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;

string isConsecutive(vector<int> arr, unordered_set<int> &set, int minimum){
    int n = arr.size();
    for(int i = 1; i < n; i++){
        if(!(set.find(minimum +i) != set.end())){
            return "False";
        }
    }
    return "Twrue";

}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    unordered_set<int> set;
    int minimum = INT_MAX;
    for(int val: arr){
        set.insert(val);
        minimum = min(minimum, val);
    }
    // bool ans = isConsecutive(arr, set, minimum);
    cout << isConsecutive(arr, set, minimum) << endl;
    
}