#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
/*Problem : Given : int arr[n], int p, q, r.
            find : maximum value of (p*arr[i] + q*arr[j] + r*arr[k]) where i,j,k are the indices 
            of the input array.
            constraints : i < j < k.*/
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int p,q,r;
    cin >> p >> q >> r;
    int pmax[n], smax[n];    // We would define pmax and smax differently to solve this problem. 
    
    pmax[0] = p*arr[0];
    for (int i = 1; i < n; i++){
        pmax[i] = max(pmax[i-1], p*arr[i]);
    }
    cout << "Pmax array : " ;
    for (int i = 0; i < n; i++){
        cout << pmax[i] << " ";
    }
    cout << endl;
    smax[n-1] = r*arr[n-1];
    for (int i = n-2; i >= 0; i--){
        smax[i] = max(smax[i+1], r*arr[i]);
    }
    cout << "Smax array : " ;
    for (int i = 0; i < n; i++){
        cout << smax[i] << " ";
    }
    cout << endl;
    int ans = INT_MIN;
    for (int i = 1; i < n-1; i++){ // to calculate smax[i+1], we need to run the loop till (n-2) i.e. i < n-1;
        ans = max(ans, pmax[i-1]+q*arr[i]+smax[i+1]);
    }
    cout << ans << endl;
    /*(Note: If the constraints change to i<=j<=k, in that case, we may initialize the value of smax and pmax as follows:
    
    pmax[0] = p*arr[0];
    for (int i = 0; i < n; i++){            // Here the loop starts from 0 (the index at which pmax[0] is initialized)
        pmax[i] = max(pmax[i-1], p*arr[i]); // and runs till n-1;
    }
    smax[n-1] = r*arr[n-1];
    for (int i = n-1; i >= 0; i--){         // As in case of pmax, Here the loop takes the index at which smax[n-1]
        smax[i] = max(smax[i+1], r*arr[i]); // is initialized.
    }
    For different constraints, we may change the CONDITIONS and the DIFINITIONS accordingly.
    */
    return 0;
}
