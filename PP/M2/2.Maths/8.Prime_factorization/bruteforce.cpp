#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int num = n;
    for (int i = 2; i < num; i++){
        while(n % i == 0){
            cout << i << " ";
            n /= i;
        }
    }
    /*  This code is running upto n which is not adding to the time complexity and
        that is not at all necessary.*/
        
    cout << endl;
    return 0;
}