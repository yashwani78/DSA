#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int x,y,k,n;
	    cin >> x >> y >> k >> n;
	    vector<vector<int>> arr(n,vector<int>(2));
        bool flag = false;
        int requiredPages = x-y;
        if(y>x) {
            flag = true;
        }
	    for(int i = 0; i < n; i++) {
	        int pages, price;
	        cin >> pages >> price;
            arr[i][0] = pages;
            arr[i][1] = price;
            if((arr[i][0] >= requiredPages) && (arr[i][1] <= k)) {
                    flag = true;
	        }
	    }
        if(flag)
	        cout << "LuckyChef" << endl;
        else 
            cout << "UnluckyChef" << endl;
	}
	return 0;
}
