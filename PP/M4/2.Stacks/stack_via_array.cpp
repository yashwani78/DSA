#include <bits/stdc++.h>
using namespace std;
const int n = 100;

struct stk {
    int arr[n];
    int top;
    stk() {
        top = -1;
    }
    bool isFull() {
        return top == n-1;
    }
    bool isEmpty() {
        return top == -1;
    }
    void push(int x) {
        if(isFull()) cout << "Overflow" << endl;
        else {
            top++;
            arr[top] = x;
        }
    }
    void pop() {
        if(isEmpty()) cout << "Underfloor" << endl;
        else {
            top--;
        }
    }
    int topElement() {
        if(isEmpty()){
            cout << "Underfloor" << endl;
            return INT_MIN;
        }
        return arr[top];
    }
};

int main() {
    // cin >> n;
    stk s;
    s.push(6);
    cout << s.topElement() << endl;
    s.pop();
    cout << s.topElement() << endl;
    bool a = s.isEmpty();
    bool b = s.isFull();
    cout << a << " " << b;
    return 0;
}