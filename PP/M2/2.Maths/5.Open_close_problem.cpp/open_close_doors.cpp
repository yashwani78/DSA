#include <iostream>
#include <cmath>

using namespace std;
/* Here we need to find the number of perfect squares upto the number n. These doors which
are at numbers which are perfect squares, will be opened odd number of times and will remain
open at last.
A door will be toggled the number of times equal to the factors of that number.
Only perfect squares have odd number of factors.*/
int main(){
    int n;
    cin >> n;
    int x = sqrt(n);
    cout << x << endl;
    return 0;
}