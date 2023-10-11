#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }
    int B[n];
    for (int i = 0; i < n; i++){
        cin >> B[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++){
        if(i == 0){
            if(B[i] <= A[i]){
                count++;
            }
        }
        else{
            if( B[i] <= (A[i] - A[i-1])){
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}