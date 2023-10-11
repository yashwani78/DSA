#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int num = n;
    for (int i = 2; i*i <= num; i++){
        while (n%i == 0){
            cout << i << " ";
            n /= i;
        }
    }
    if (n != 1) {
        cout << n << endl;
    }

    /*  Here in this code, we iterate upto sqrt(n). If there is any factor present after 
        the sqrt(n) till n, that would be just one in number and that too a 'Prime'. We can
        print that number by checking through a condition in the last.
        */

    return 0;
}