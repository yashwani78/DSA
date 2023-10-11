#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 2; i*i <= n; i++){
        if(n%i == 0){
            cnt++;
        }
    }
    if(cnt == 0){
        cout << "Prime"<< endl;
    }
    else{
        cout << "Non Prime" << endl;
    }
    return 0;
}