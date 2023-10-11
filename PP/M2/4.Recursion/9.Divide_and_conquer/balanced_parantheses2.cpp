/**
 * Problem Link : 
 * https://www.hackerrank.com/contests/gl-bajaj-self-evaluation-evening-batch/challenges/bracket-challenge-1/problem
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void balParantheses(int n, int m, int l1, int l2, int r1, int r2, int i, vector<char> s) {
    if( i == 2*(m+n)) {
        for(int j = 0; j < s.size(); j++) {
            cout << s[j];
        }
        cout << endl;
        return;
    }
    
    return;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<char> s(2*(m+n));
    balParantheses(n, m, 0, 0, 0, 0, 0, s);
    return 0;
}