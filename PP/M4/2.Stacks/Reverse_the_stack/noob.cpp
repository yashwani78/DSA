#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<int> s;
    int i;
    for (i = 0; i < 5; i++){ //Take input in s.
        s.push(i);
    }
    

    stack<int> s1; 
    for (i = 0; i < 5; i++){ // Copy s to s1.
        int x = s.top();
        s1.push(x);
        s.pop();
    }

    stack<int> s2; 
    for (i = 0; i < 5; i++){ // Copy s1 to s2.
        int x = s1.top();
        s2.push(x);
        s1.pop();
    }

    for (i = 0; i < 5; i++){ // Again copy s2 to s.
        int x = s2.top();
        s.push(x);
        s2.pop();
    }
    
    for (i = 0; i < 5; i++){ // Print values of s.
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}