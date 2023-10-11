#include <bits/stdc++.h>
using namespace std;

bool convert(long a, long b, vector<long> &ans) {
    if(a > b) return false;
    if(a == b){
        ans.push_back(a);
        return true;
    }
    bool x = convert(2*a, b, ans);
    bool y = convert((10*a)+1, b, ans);
    if(x || y) ans.push_back(a);
    return (x || y);
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
        for(int i = ans.size()-1; i >= 0; i--) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}