#include<iostream>
#include<stack>
using namespace std;

void pushBottom(stack<int> &s, int x){
    if(s.empty()){
        s.push(x);
        return;
    }
    int top = s.top();
    s.pop();
    pushBottom(s,x);
    s.push(top);
    return;
}

int main(){

    stack<int> s;
    int i;
    for (i = 0; i < 5; i++){
        s.push(i);
    }

    pushBottom(s,i);

    for (i = 0; i < 6; i++){
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}