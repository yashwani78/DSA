#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
/*Problem : Given : int arr[n], int p, q, r.
            find : maximum value of (p*arr[i] + q*arr[j] + r*arr[k]) where i,j,k are the indices 
            of the input array.
            constraints : i < j < k.*/

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0 ; i < n; i++){
        cin >> arr[i];
    }
    int pmax[n]; // prefix max
    pmax[0] = arr[0];
    for (int i = 1; i < n; i++){
        pmax[i] = max(arr[i], pmax[i-1]);
    }
    int smax[n]; // suffix max
    smax[n-1] = arr[n-1];
    for (int i = n-2; i >= 0; i--){
        smax[i] = max(arr[i], smax[i+1]);
    }
    /*  To find the value of : max(arr[i] + arr[j] + arr[k]), 
        The code would be as follows : 
        Code below would help us to understand the problem more clearly.*/

    int x , ans = INT_MIN;
    for (int i = 1; i < n-1; i++){
        x = pmax[i-1] + arr[i] + smax[i+1];
        ans = max(ans,x);
    }
    cout << "The value of max(arr[i] + arr[j] + arr[k]) is : "<< ans << endl;

    /*  Now, to find the value of : max(p*arr[i] + q*arr[j] + r*arr[k]) , we need to change 
    the definition of 'pmax' and 'smax'. The code for that is written in another file to eliminate the
    confusion.*/

    return 0;
}