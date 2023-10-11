#include <bits/stdc++.h>
using namespace std;
/**
 * Problem:
 
 * Vasily has a number a, which he wants to turn into a number b. For this purpose, he can do two types of operations:
    * multiply the current number by 2 (that is, replace the number x by 2·x);
    * append the digit 1 to the right of current number (that is, replace the number x by 10·x + 1).
* You need to help Vasily to transform the number a into the number b using only the operations described above, or find that it is impossible.
* Note that in this task you are not required to minimize the number of operations. It suffices to find any way to transform a into b.
* constraints(1 ≤ a < b ≤ 10^9)
*/

bool convert(long a, long b, vector<long> &ans) {
    if(b == a) {
        ans.push_back(b);
        return true;
    }
    if(b < a) return false;
    bool x,y;
    x = (b%2 == 0) ? convert(a, b/2, ans) : false;
    y = ((b-1)%10 == 0) ? convert(a, ((b-1)/10), ans) : false;

    if(x||y) ans.push_back(b);

    return x || y;
}

int main() {
    long a,b;
    cin >> a >> b;
    vector<long> ans;
    bool found = convert(a,b,ans);
    if(found == false) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
        cout << ans.size() << endl;
        for(long value : ans) {
            cout << value << " ";
        }
        cout << endl;
    }
    return 0;
}