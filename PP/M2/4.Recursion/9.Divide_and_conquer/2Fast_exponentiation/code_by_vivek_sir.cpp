#include <iostream>
using namespace std;

/*  Given   :   int N, K.
    Find    :   N^K.          
    This code was written by vivek sir on programming pathshala 
    (slightly different than that of mine and more concise) . */

int Pow(int N, int K){
    if (K == 0){
        return 1;
    }

    int x = Pow(N,K/2);

    if(K % 2 == 0){
        return x*x;
    }

    return x*x*N;
    
}

int main(){

    int N,K;
    cin >> N >> K;
    cout << Pow(N,K) << endl;
    return 0;
    
}