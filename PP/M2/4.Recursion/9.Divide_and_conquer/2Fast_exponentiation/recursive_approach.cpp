#include <iostream>
using namespace std;

/*  Given   :   int N, K.
    Find    :   N^K.          */
    
long long findPower(int num, int exp){
    if(exp == 0){
        return 1;
    }
    exp--;
    return num * findPower(num,exp);
}

int main(){

    int N,K;
    
    cin >> N >> K;

    cout << findPower(N,K) << endl;

    return 0;
}