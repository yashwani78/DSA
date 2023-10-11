#include <iostream>
#include <cmath>
using namespace std;
/*problem : Given: int n, if no of divisors is even, return false and if odd, return true.*/

int main(){
    int n;
    cin >> n;
    int x = sqrt(n);
    if (x*x == n){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }
    return 0;
}