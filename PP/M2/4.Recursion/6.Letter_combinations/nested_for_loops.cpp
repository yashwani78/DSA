#include <iostream>
#include <string>
using namespace std;

int main(){
    /*Digit string = "2,3". ==>
    Means we can type one character out of the three characters present
    on the key with digit '2' followed by one character present on the key with digit '3' on the keypad.*/
    
    string c1 = "abc";
    string c2 = "def";
    int cnt = 0;


    cout << "********" << endl;

    for (int i = 0; c1[i] != '\0'; i++){
        for (int j = 0; c2[j] != '\0'; j++){
            cout << c1[i] << c2[j];
            cnt++;
            cout << endl;

        }
    }

    cout << cnt << endl;
    return 0;
}