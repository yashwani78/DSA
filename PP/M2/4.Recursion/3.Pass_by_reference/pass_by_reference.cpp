#include <bits/stdc++.h>
using namespace std;

void func(int &y){
    y++;
    cout << y << endl;
    return;
}

int main(){
    int x;
    cin >> x;
    func(x);
    cout << x << endl;
    return 0;
}