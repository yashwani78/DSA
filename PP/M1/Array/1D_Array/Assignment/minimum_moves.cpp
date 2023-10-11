#include <bits/stdc++.h>
using namespace std;

	int getMin(vector<int> arr) {
		int minm = INT_MAX;
		for(int i = 0; i < arr.size(); i++) {
			minm = min(arr[i], minm);
		}
		return minm;
	}

	pair<int, int> getMaxmAndIndex(vector<int> arr) {
		int maxm = INT_MIN;
		int index = -1;
		for(int i = 0; i < arr.size(); i++) {
			maxm = max(arr[i], maxm);
			if(arr[i] == maxm) index = i;
		}
		return {maxm, index};
	}

	int main(){
		int n; 
		cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		
		int minm = getMin(arr);
		int maxm = getMaxmAndIndex(arr).first;
		int noChangeIndex = getMaxmAndIndex(arr).second;
		int count = 0;

		while( minm != maxm) {
			count++;

			for (int i = 0; i < n; i++) {
				if(i != noChangeIndex) 
					arr[i] = arr[i] + 1;	
			}

			minm = getMin(arr);
			maxm = getMaxmAndIndex(arr).first;
			noChangeIndex = getMaxmAndIndex(arr).second;
		}


	cout << count << endl;
	return 0;
}