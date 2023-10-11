#include <bits/stdc++.h>
using namespace std;

	struct minMaxAndIdx
	{
		int minm;
		int maxm;
		int index;
		minMaxAndIdx(int mini, int maxim, int idx) : minm(mini), maxm(maxim), index(idx) {}
	};
	
	minMaxAndIdx findValues(vector<int> &arr) {
		int maxm = INT_MIN, minm = INT_MAX, idx = -1;
		for(int i = 0; i < arr.size(); i++) {
			maxm = max(maxm, arr[i]);
			minm = min(minm, arr[i]);
			if(arr[i] == maxm) idx = i;
		}
		return minMaxAndIdx(minm, maxm, idx);
	}

	int main(){

		int n; 
		cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		minMaxAndIdx v = findValues(arr);
		
		// cout << v.minm << endl;
		int minmInArray = v.minm;
		int maxmInArray = v.maxm;
		int noChangeIndex = v.index;
		int count = 0;

		while(minmInArray != maxmInArray) {
			count++;
			for (int i = 0; i < n; i++) {
				if(i != noChangeIndex) 
					arr[i] += 1;
			}

			v = findValues(arr);
			minmInArray = v.minm;
			maxmInArray = v.maxm;
			noChangeIndex = v.index;	
		}
		
		cout << count << endl;
	return 0;
}