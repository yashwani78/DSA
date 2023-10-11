#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    stack <char> stk;
    stk.push(s[0]);
    for (int i = 1; i < s.length(); i++){
        if(!stk.empty() && s[i] == stk.top()) stk.pop();
        else stk.push(s[i]);
    }
    // while(!stk.empty()){
    //     cout << stk.top() << " ";
    //     stk.pop();
    // }
    // cout << endl;
    stack<char> temp;
    while (!stk.empty()){
        temp.push(stk.top());
        stk.pop();
    }
    string ans;
    while (!temp.empty()){
        ans += temp.top();
        temp.pop();
    }

    cout << ans << endl;
    return 0;
}
