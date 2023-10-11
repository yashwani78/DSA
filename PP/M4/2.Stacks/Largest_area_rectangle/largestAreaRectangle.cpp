#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {10, 20, 30, 40, 9};
    vector<int> NSE(arr.size());
    vector<int> PSE(arr.size());
    stack<int> s;

    s.push(0);
    // Next smaller element.
    for(int i = 1; i < arr.size(); i++){
        while(!s.empty() && arr[i] < arr[s.top()]){
            NSE[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty()){
        NSE[s.top()] = arr.size();
        s.pop();
    }
    // Previous smaller element.
    for(int i = 0; i < arr.size(); i++){
        cout << arr[NSE[i]] << " ";
    }
    cout << endl;

}