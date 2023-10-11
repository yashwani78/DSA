#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int maxGap(vector<int> &nums){
    int n = nums.size();

    if( n < 2) return 0;

    int maxNum = INT_MIN, minNum = INT_MAX;

    for (int i = 0; i < n; i++){
        maxNum = max(maxNum , nums[i]);
        minNum = min(minNum , nums[i]);
    }

    if( minNum == maxNum) return 0;

    int gap = (maxNum - minNum)/(n-1);
    if ((maxNum - minNum) % (n-1) != 0) gap++;

    int minArr[n], maxArr[n];
    for (int i = 0; i < n; i++){
        minArr[i] = INT_MAX;
        maxArr[i] = INT_MIN;
    }

    for (int i = 0; i < n; i++){
        int bkt = (nums[i] - minNum)/gap;
        minArr[bkt] = min(minArr[bkt],nums[i]);
        maxArr[bkt] = max(maxArr[bkt],nums[i]);
    }

    int ans = INT_MIN;
    int prev = INT_MIN;
    for(int i = 0; i < n; i++){

        if (minArr[i] == INT_MAX) continue;

        if (prev == INT_MIN) prev = maxArr[i];

        else{
            ans = max (ans, minArr[i]-prev);
            prev = maxArr[i];
        }
    }

    return ans;
}

int main(){

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ans = maxGap(arr);
    cout << "Maximum consecutive gap is : " << ans << endl;

    return 0;
}