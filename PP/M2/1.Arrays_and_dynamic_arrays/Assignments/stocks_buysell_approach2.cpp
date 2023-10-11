#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int prices[n];
    for (int i = 0; i < n; i++){
        cin >> prices[i];
    }
    int buy = INT_MAX, profit = 0;

    for (int i = 0; i < n; i++){
        buy = min(prices[i],buy);
        profit = max(profit,prices[i]-buy);
    }
    cout << profit << endl;
    return 0;
}