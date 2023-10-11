#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> getBinary(int n) {
    vector<int> vec;
    while(n != 0) {
        vec.push_back(n%2);
        n /= 2;
    }
    return vec;
}

void pass(vector<int>&nums, vector<vector<int>>&ans) {
    int n = pow(2,nums.size())-1;
    for(int i = 0; i <= n; i++) {
        vector<int> bin = getBinary(i);
        vector<int> tmp;
        for(int j = 0; j < bin.size(); j++) {
            if(bin[j] == 1) tmp.push_back(nums[j]);
        }
        ans.push_back(tmp);
        bin.clear();
        tmp.clear();
    }
    return;
}

int main() {
    vector<int> nums = {1,2,3};
    vector<vector<int>> ans;
    pass(nums, ans);
    for(int i = 0; i < ans.size(); i++) {
        if(ans[i].empty()){ 
            cout << "empty" << endl;
            continue;
        }
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}