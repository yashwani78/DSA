#include <iostream>
using namespace std;
//self derived approach
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += (arr[i]*(n-i)*(i+1));
    }
    /*  This is the formula when you look closely and analyze, automatically gets noticed.
        be cautious of the integer overflow because so much of multiplication is taking place.
        modular arithmetic:
        (a*b) % m = ((a % m)*(b % m)) % m 
        m will be provided in the question.*/
    cout << sum << endl;
    return 0;
}