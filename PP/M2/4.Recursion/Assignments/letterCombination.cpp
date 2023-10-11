#include <iostream>
#include <vector>
#include <string>
using namespace std;

void printAllCombs(string tmp, string&digits, int i, vector<vector<char>>&digitMap) {
    if(digits[i] == '\0') {
        cout << tmp << " ";
        return;
    }
    for(int j = 0; j < digitMap[digits[i]-'2'].size(); j++) {
        printAllCombs(tmp+digitMap[digits[i]-'2'][j], digits, i+1, digitMap);
    }
    // cout << endl;
    return;
}

int main() {
    vector<vector<char>> digitMap;
    digitMap.push_back({'a', 'b', 'c'});
    digitMap.push_back({'d', 'e', 'f'});
    digitMap.push_back({'g', 'h', 'i'});
    digitMap.push_back({'j', 'k', 'l'});
    digitMap.push_back({'m', 'n', 'o'});
    digitMap.push_back({'p', 'q', 'r', 's'});
    digitMap.push_back({'t', 'u', 'v'});
    digitMap.push_back({'w', 'x', 'y', 'z'});

    string digits;
    cin >> digits;
    if (digits.length() == 0) return 0;
    string tmp = "";
    int i = 0;
    printAllCombs(tmp, digits, i, digitMap);
    cout << endl;

    return 0;
}