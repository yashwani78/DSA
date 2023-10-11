#include <iostream>
using namespace std;

int main(){
    char name[100];
    char vowels[100] = "aeiouAEIOU";
    cin >> name;
    int vowel = 0;
    for ( int i = 0; name[i] != '\0'; i++){
        for (int j = 0; vowels[j] != '\0'; j++){
            if(name[i] == vowels[j]){
                vowel++;
            }
        }
    }
    cout << vowel << endl;
    return 0;
}