#include <iostream>
using namespace std;

int main(){
    char name[100];
    cin >> name;
    int len = 0, i;
    for( i = 0; name[i] != '\0'; i++){
        len++;
    }
    char reverse[len];
    for ( i = 0; i < len; i++){
        reverse[i] = name[len-1-i];
    }
    reverse[len] = '\0';
    cout << "Reverse : " << reverse << endl;
    for ( i = 0; name[i] != '\0'; i++){
        if (name[i] != reverse[i]){
            break;
        }
    }
    if( name[i] == '\0' && reverse[i] == '\0'){
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not a Palindrome" << endl;
    }
    return 0;
}