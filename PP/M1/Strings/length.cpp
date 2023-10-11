#include <iostream>
using namespace std;

int main(){
    // Approach 1.
    char name[100];
    cin >> name;
    cout << name << endl;
    int len = 0, vovel = 0;
    for(int i = 0 ; name[i] != '\0'; i++){
        if(name[i] == 'a' || name[i] == 'e' || name[i] =='i' || name[i] =='o' || name[i] =='u'){
            vovel++;
        }
            len ++;
    }

    cout << len << endl;
    cout << "Vovels : " << vovel << endl;
    // Approach 2.
    // wrote another code for Approach 2 with title 'vowels'. Go there and check it out.
    
    return 0;
}