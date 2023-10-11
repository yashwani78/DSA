#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int maxm = max(n,m);
    int lcm = 0;
    for (int i = maxm; i <= m*n; i++){
        if (i%n == 0 && i%m == 0){
            lcm = i;
            break;
        }
    }
    cout << lcm << endl;
    return 0;
}