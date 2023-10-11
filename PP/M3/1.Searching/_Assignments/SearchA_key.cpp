#include <iostream>
using namespace std;
int binarySearch(int arr[], int start, int end, int key){
	while(start <= end){
		int mid = (start + end) / 2;
		if (arr[mid] == key)
			return mid;
		else if (arr[mid] < key)
			start = mid+1;
		else
			end = mid-1;
	}
	return -1;
}

int main() {
    int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}
	int t;
	cin >> t;
	while (t--){
		int key;
		cin >> key;
		cout << binarySearch(arr,0,n-1,key);
	}
    return 0;
}