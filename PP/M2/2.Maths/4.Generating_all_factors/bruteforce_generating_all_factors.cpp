#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        if (n%i == 0){
            cout << i << " ";
        }
    }
    cout << endl << "Output with 2nd approach : " << endl;

    // in the upper code, it is useless to traverse after i=n/2 because after n/2, only n will
    // be the factor of n. So the updated code would look like..

    for (int i = 1; i <= n/2; i++){
        if (n%i == 0){
            cout << i << " ";
        }
    }
    cout << n << endl;

    /*In the above code, the time complexity is reduced by n/2 iterations but it isn't a 
    significant reduction. To reduce further, we can use another approach where we would 
    traverse upto sqrt(n).*/

    cout << "Output from 3rd approach : " << endl;

    for (int i = 1; i*i <= n; i++){
        if(n%i == 0){
            if( i*i == n){
                cout << i << " ";
            }
            else{
                cout << i << " " << n/i << " ";
            }
        }
    }
    cout << endl;
    return 0;
}