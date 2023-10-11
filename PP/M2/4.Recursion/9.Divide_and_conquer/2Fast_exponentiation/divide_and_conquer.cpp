#include <iostream>
using namespace std;
/*  Given   :   int N, K.
    Find    :   N^K.          
    This was written by me with the PP's help
    (little bulky than the one given by Vivek sir)*/
int Pow(int num, int exp){
    if (exp == 0){
        return 1;
    }
    if(exp % 2 == 0){
        exp /= 2;
        int x = Pow(num,exp);
        return x*x;
    }
    else{
        exp /= 2;
        int x = Pow(num,exp);
        return x*x*num;
    }
}

int main(){

    int N,K;
    cin >> N >> K;
    cout << Pow(N,K) << endl;
    return 0;
    
}