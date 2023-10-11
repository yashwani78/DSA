#include <iostream>
#include <climits>
using namespace std;
/*Problem : Given : int arr[n], int p, q, r.
            find : maximum value of (p*arr[i] + q*arr[j] + r*arr[k]) where i,j,k are the indices 
            of the input array.
            constraints : i < j < k.*/
// Bruteforce approach for the Maximized expression problem is given below.
int main(){
    int n;
    int p,q,r;
    cout << "Input the length of the array : ";
    cin >> n;
    int arr[n];
    cout << "Input the elements of the array : ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int ans = INT_MIN;
    cout << "Enter the value of p, q, r : " ;
    cin >> p >> q >> r;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j <= n-1; j++){
            for (int k = j+1; k <= n-1; k++){
                int exp = p*arr[i] + q*arr[j] + r*arr[k];
                if (ans < exp){
                    ans = exp;
                }
            }
        }
    }
    cout << "Maximized expression is : " << ans << endl;
    return 0;
}
