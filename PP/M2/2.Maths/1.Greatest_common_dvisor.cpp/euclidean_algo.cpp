#include <iostream>
#include <algorithm>
using namespace std;

// Time complexity is O(log2 max(a,b)) for the worst case.


int main(){
    int a,b, gcd;
    cin >> a >> b;
    int maxm = max(a,b);
    int minm = min(a,b);
    if(minm == 0){
        gcd = maxm;
    }
    while (maxm % minm != 0){
        int tmp = maxm;
        maxm = minm;
        minm = tmp % minm;
    }
    cout << minm << endl;
    return 0;
}