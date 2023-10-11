#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int pmin[n];
    pmin[0] = arr[0];
    for (int i = 1; i < n; i++){
        pmin[i] = min(arr[i],pmin[i-1]);
    }
    int smax[n];
    smax[n-1] = arr[n-1];
    for (int i = n-2; i >= 0; i--){
        smax[i] = max(arr[i],smax[i+1]);
    }
    int profit = smax[0]-pmin[0];
    for (int i = 1; i < n; i++){
        profit = max(profit, (smax[i]-pmin[i]));
    }
    if(profit)
    cout << profit << endl;
    else
    cout << 0 << endl;
    return 0;
}