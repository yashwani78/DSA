/* 	Problem: Given :int arr[n].
	*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int firstPosition(vector<int> &vec, int target){
	int n = vec.size();
	int low = 0;
	int high = n-1;
	while (low <= high){
		int mid = low + (high - low)/2;
		if (vec[mid] < target)
			low = mid + 1;
		else if(vec[mid] > target)
			high = mid - 1;
		else{
			if(mid == 0)
				return mid;
			else if(vec[mid-1] != target)
				return mid;
			else
				high = mid - 1;
		}
	}
	return -1;
}

int lastPosition(vector<int> &vec, int target){
	int n = vec.size();
	int low = 0;
	int high = n-1;
	while (low <= high){
		int mid = low + (high - low)/2;
		if (vec[mid] < target)
			low = mid + 1;
		else if(vec[mid] > target)
			high = mid - 1;
		else{
			if(mid == 0)
				return mid;
			else if(vec[mid+1] != target)
				return mid;
			else
				low = mid + 1;
		}
	}
	return -1;
}

int findFreq(vector<int> &vec, int target){
	int first = firstPosition(vec,target);
	int last = lastPosition(vec,target);
	if (first == -1)
		return -1;
	else 
		return (last - first)+1;
}
// Another method to find the frequency of an array element.

// int findFrequency(vector<int>& arr, int target) {
//     int low = 0;
//     int high = arr.size() - 1;
//     int count = 0;

//     while (low <= high) {
//         int mid = low + (high - low) / 2;

//         if (arr[mid] == target) {
//             count++;

//             // Check elements to the left
//             int left = mid - 1;
//             while (left >= 0 && arr[left] == target) {
//                 count++;
//                 left--;
//             }

//             // Check elements to the right
//             int right = mid + 1;
//             while (right < arr.size() && arr[right] == target) {
//                 count++;
//                 right++;
//             }

//             break;
//         } else if (arr[mid] < target) {
//             low = mid + 1;
//         } else {
//             high = mid - 1;
//         }
//     }

//     return count;
// }

int main(){
	// t is no of test cases.
	int t;
	cin >> t;
	while (t--){
		int n; 
		cin >> n;
		vector<int> arr(n,0);  // Original array.
		for (int i = 0; i < n; i++){
			cin >> arr[i];
		}

		// Creating LHS array.
		vector<int> LHSArr;

		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				for (int k = 0; k < n; k++){
					LHSArr.push_back(arr[i] * arr[j] + arr[k]);
				}
			}
		}
		
		// Creating RHS array.
		vector<int> RHSArr;

		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				for (int k = 0; k < n; k++){
				if(arr[i] != 0)
					RHSArr.push_back(arr[i] * (arr[j] + arr[k]));
				}
			}
		}
		// sorting RHS array.
		sort(RHSArr.begin(), RHSArr.end());

		int ansCount = 0;
		for(int i = 0; i < LHSArr.size(); i++){
			int value = LHSArr[i];
			// Finding frequency of each LHS array element in RHS array.
			int frequency = findFreq(RHSArr,value);
			if(frequency < 0){
				continue;
			}
			else{
				ansCount += frequency;
			}
		}
		cout << ansCount << endl;
	}
}