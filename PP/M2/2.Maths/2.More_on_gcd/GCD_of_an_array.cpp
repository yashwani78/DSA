#include<iostream>
#include<algorithm>
using namespace std;

// Using euclidean algo.

int gcd(int a, int b) {
    int minm = min(a, b);
    int maxm = max(a, b);
    int gcd;
    if (minm == 0) {
        gcd = maxm;
    }
    else {
        while (maxm % minm != 0) {
            int temp = maxm;
            maxm = minm;
            minm = temp % minm;
        }
        gcd = minm;
    }
    return gcd;
}


int main(){
    int n,hcf;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    hcf = gcd(arr[0],arr[1]);
    for (int i = 2; i < n; i++){
        hcf = gcd(hcf, arr[i]);
    }
    cout << hcf << endl;
    return 0;
}