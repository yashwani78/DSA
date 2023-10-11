/**
 * Problem Link:
 * https://leetcode.com/problems/generate-parentheses/description/
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void PrintParantheses(int n, int l, int r, int i, vector<char> &s, vector<string> &ans) {
    if(i == 2*n) {
        string str;
        for(int j = 0; j < s.size(); j++) {
            str += s[j];
        }
        ans.push_back(str);
        return;
    }
    if(l == r) {
        s[i] = '(';
        PrintParantheses(n, l+1, r, i+1, s, ans);
    } 
    else if(l > r) {
        if(l == n) {
            s[i] = ')';
            PrintParantheses(n, l, r+1, i+1, s, ans);
        }
        else {
            s[i] = '(';
            PrintParantheses(n, l+1, r, i+1, s, ans);
            s[i] = ')';
            PrintParantheses(n, l, r+1, i+1, s, ans);
        }
    }
    return;
}

int main() {
    int n;
    cin >> n;
    vector<char> s(2*n);
    vector<string> ans;
    int cnt = 0;
    PrintParantheses(n, 0, 0, 0, s, ans);
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }
    return 0;
}