#include<iostream>
#include<vector>

using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }
    int x = nums.size() - 1;
    while(x > 0 && nums[x] <= nums[x-1]){
        x--;
    }
    if(x-1 >= 0){
        for(int y = nums.size()-1; y>=x; y--){
            if(nums[y] > nums[x-1]){
                int temp = nums[x-1];
                nums[x-1] = nums[y];
                nums[y] = temp;
                break;
            }
        }
        int i = x;
        int j = nums.size()-1;
        while(i < j){
            int tmp = nums[i];
            nums[i] = nums[j];
            nums[j] = tmp;
            i++;
            j--;
        }
    }
    for (int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}
