#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int gcd;
    if ( n > m){
        int temp = n;
        n = m;
        m = temp;
    }
    for (int i = 1; i < m/2; i++){
        if (n%i==0 && m%i==0){
            gcd = i;
        }
    }
    cout << gcd << endl;
    return 0;
}