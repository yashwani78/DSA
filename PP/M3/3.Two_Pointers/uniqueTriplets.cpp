/**
 * Given an integer numsay nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
 
 * Notice that the solution set must not contain duplicate triplets.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    } cout << endl;

    vector<vector<int>> ans;
    int p1,p2;
    for(int i = 0; i < n; i++) {
        if(i > 0 && nums[i] == nums[i-1]) continue;
        else {
            int rem = -1 * nums[i];
            p1 = i+1, p2 = nums.size() -1;
            while(p1 < p2) {
                if(nums[p1] + nums[p2] < rem) p1++;
                else if(nums[p1] + nums[p2] > rem) p2--;
                else {
                    ans.push_back({nums[i], nums[p1], nums[p2]});
                    if (nums[p1] == nums[p2]) break;
                    else {
                        int x = nums[p1], y = nums[p2];
                        while(nums[p1] == x) p1++;
                        while(nums[p2] == y) p2--;
                    }
                }
            }
        }
    }
    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    return 0;
}