#include <iostream>
using namespace std;

long long power(long long n){

    if (n == 0)
        return 1;

    return 2 * power(n-1);

}

int main(){

    long long n;
    cin >> n;
    long long ans = power(n);
    cout << ans << endl;
    return 0;

}