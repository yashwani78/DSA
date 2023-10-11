#include <iostream>
using namespace std;

/*  Given   :   int N, K.
    Find    :   N^K.          */

int main(){
    int N, K;

    cin >> N >> K;
    int answer = 1;

    for (int i = 1; i <= K; i++){
        answer *= N;
    }
    cout << answer << endl;

    return 0;
}