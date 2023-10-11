#include <iostream>
using namespace std;

int main(){
    char name[100] = "quick brown fox jumped over the lazy dog. the dog was scared and ran quickly.";
    cout << name << endl;
    for(int i = 0; name[i] != '\0'; i++){
        if(name[i] == '.'){
            name[i+2] -= 32; //uppercasing of the character after the full stop. 
        }
        else if( i == 0){
            name[i] -= 32; //uppercasing of the first character
        }
    }
    cout << name << endl;
    return 0;
}