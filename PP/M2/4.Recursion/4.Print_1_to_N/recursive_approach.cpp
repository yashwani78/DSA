#include <iostream>
using namespace std;
int y = 1;

void printNums(int &x){
    if(y > x)
    return;
    cout << y << " " ;
    y++;
    printNums(x);
}

int main(){
    int n;
    cin >> n;
    printNums(n);
    cout << endl;
    return 0;
}