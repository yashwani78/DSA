#include <bits/stdc++.h>
using namespace std;

const int max_size = 10;

struct queues {
    int arr[max_size];
    int back;
    int front;
    int numberOfElements;

    queues() {
        back = -1;
        front = -1;
        numberOfElements = 0;
    }

    bool isFull() {
        return numberOfElements == max_size;
    }

    bool isEmpty() {
        return numberOfElements == 0;
    }

    void push(int x) {
        if(isFull()) cout << "Overflow" << endl;
        else{
            back = (back+1) % max_size;
            arr[back] = x;
            numberOfElements++;
            if(front == -1) front++;
        }
    }

    void pop() {
        if(isEmpty()) cout << "Underfloor" << endl;
        else {
            front = (front + 1) % max_size;
            numberOfElements--;
        }
    }

    int frontElement() {
        if(isEmpty()) cout << "Queue is empty" << endl;
        else return arr[front];
        return -1;
    }

    int backElement() {
        if(isEmpty()) cout << "Queue is empty" << endl;
        else return arr[back];
        return -1;
    }

};

int main() {
    queues q;
    for(int i = 1; i < 11; i++) {
        q.push(i);
        q.pop();
    }

    q.pop();
    cout << "Front index : " << q.front << ", Front Element : " << q.frontElement() << endl;
    cout << "Back index : " << q.back << ", Back Element : " << q.backElement() << endl;


    string res = (q.isEmpty()) ? "Empty" : "Not Empty";
    cout << res << endl;
    return 0;
}