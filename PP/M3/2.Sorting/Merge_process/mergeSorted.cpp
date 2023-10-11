#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cin >> m >> n;
    vector<int> nums1(m);
    vector<int> nums2(n);
    vector<int> nums3(m+n);
    for(int i = 0; i < m; i++){
        cin >> nums1[i];
    }
    for(int i = 0; i < n; i++){
        cin >> nums2[i];
    }
    int i = 0;
    int j = 0;
    int c = 0;
    while (i < m && j < n){
        if(nums1[i] < nums2[j]){
            nums3[c++] = nums1[i++];
        } else{
            nums3[c++] = nums2[j++];
        }
    }
    while (i < m){
        nums3[c++] = nums1[i++];
    }
    while (j < n){
        nums3[c++] = nums2[j++];
    }

    for (i = 0; i < m+n; i++){
        cout << nums3[i] << " ";
    }
    cout << endl;

    return 0;
}