#include <bits/stdc++.h>
using namespace std;

void func(int n){

    cout << n << " ";

    if (n >= 3){
        return;
    }

    func (n+1);
    func (n+2);
}

int main(){
    int n;
    cin >> n;
    cout << endl;
    func (n);
    cout << endl;
    return 0;
}