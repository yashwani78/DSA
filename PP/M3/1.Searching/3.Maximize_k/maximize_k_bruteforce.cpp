#include <iostream>
#include <vector>
using namespace std;

/*Time complexity: O(n^2)*/

int main(){
    vector<int> arr = {1,2,3,4};
    int x;
    cin >> x;
    int n = arr.size();
    int maxWindowSize = 0;
    // Outer for loop: Increases the value of window size by one unit
    for (int k = 1; k <= n; k++){
        int sum = 0;
        // Calculate the sum of first window of size k.
        for (int i = 0; i < k; i++){
            sum += arr[i];
        }
        if(sum > x) break; // Compare the sum of first window and break if condition is true.
        else{
            // Sliding window for remaining windows and calculating sum.
            for (int i = k; i < n; i++){
                sum += arr[i];
                sum -= arr[i-k];
                if(sum > x) break; //Compare the sum of each remaining window and break accordingly.
            }
        }
        if(sum > x) break;
        else maxWindowSize = k;
    }

    cout << maxWindowSize << endl;
}