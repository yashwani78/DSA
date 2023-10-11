#include <bits/stdc++.h>
using namespace std;

int fact (int n){
    /*  Recursive function will always have a termination condition
        because recursive eqn is not applied for all the types of values.*/
    if(n == 0) 
        return 1;
    return n * fact(n-1);
}

int main(){
    int n;
    cin >> n;
    int y = fact(n);
    cout << y << endl;
    return 0;
}