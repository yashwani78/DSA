/**
 *Print first n natural numbers whose digits belong to {1,2,3}.
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    queue<int> q;
    q.push(0);
    int c = 0;
    while(c < n) {
        int l = q.front();
        if(l > 0) {
            cout << q.front() << endl;
            c++;
        }
        q.pop();
        q.push(l * 10 + 1);
        q.push(l * 10 + 2);
        q.push(l * 10 + 3);
    }
    return 0;
}