#include <iostream>
using namespace std;

int main(){
    char name[100] = "hannah";
    int len = 0;
    for (int i = 0; name[i] != '\0'; i++){
        len++;
    }

    char reverse[len];
    for (int i = len-1; i >= 0; i--){
        reverse [len-i-1] = name[i];
    }
    cout << "Length : " << len << endl << "Reverse : " << endl;
    // for (int i = 0; i < len ; i++){
    //     cout << reverse[i];
    // }
    
    cout << name << endl;
    
    return 0;
}