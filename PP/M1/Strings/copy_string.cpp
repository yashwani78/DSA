#include <iostream>
using namespace std;
int main(){
    char sentence1[100] = "Be a top programmer";
    char sentence2[100];
    int i;
    for(i = 0; sentence1[i] != '\0'; i++){
        sentence2[i] = sentence1[i];
    }
    sentence2[i] = '\0';

    /*Its always a best practice to explicitly storing a null 
    character at the end of the string as is will eliminate the
    possibilities of the errors.*/
    
    cout << sentence2 << endl;
    return 0;
}