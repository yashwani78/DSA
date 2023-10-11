#include <iostream>
#include <vector>
using namespace std;

/**
 * Given an integer array nums of unique elements, return all possible subsets (the power set).
 * The solution set must not contain duplicate subsets. Return the solution in any order.
 * Input: nums = [1,2,3]
 * Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
*/

void pass(vector<int> arr, int i, vector<int>&tmp, vector<vector<int>> &ans) 
{
    if(i == arr.size()) {
        ans.push_back(tmp);
        return;
    }
    // Not including array element.
    pass(arr,i+1,tmp,ans);
    // Including the array element.
    tmp.push_back(arr[i]);
    pass(arr,i+1,tmp,ans);
    tmp.pop_back();
    return;
}

int main() {
    vector<int> arr = {1,2,3};
    vector<int> tmp;
    vector<vector<int>> ans;
    pass(arr, 0, tmp, ans);


    for(int i = 0; i < ans.size(); i++) {
        if(ans[i].size() == 0){
                cout << "[]" << endl;
                continue;
        }
        cout << "[";
        for(int j = 0; j <ans[i].size(); j++) {
            if(j == ans[i].size()-1) cout << ans[i][j];
            else cout << ans[i][j] << ",";
        }
        if(i == ans.size()-1) cout << "]" << endl;
        else cout << "], ";
    }
    return 0;
}