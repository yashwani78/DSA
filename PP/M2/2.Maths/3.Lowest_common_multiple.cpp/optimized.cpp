#include <iostream>
#include <algorithm>

using namespace std;
// Using euclidean approach to find the HCF ,and formula = (a*b = hcf*lcm); 
// LCM = (a*b)/HCF.
int main(){
    int a,b;
    cin >> a >> b;
    int minm = min(a,b);
    int maxm = max(a,b);
    while (maxm % minm != 0){
        int tmp = maxm;
        maxm = minm;
        minm = tmp % minm;
    }
    cout << "HCF -> " << minm << endl;
    int lcm = (a*b)/minm;
    cout << "LCM -> " << lcm << endl;
    return 0;
}