#include <iostream>
using namespace std;

int main(){
    char names[5][100];
    for (int i = 0; i < 5; i++){
        cin >> names[i];
    }
    for (int i = 0; i < 5; i++){
        int len = 0;
        for(int j = 0; names[i][j] != '\0'; j++){
            len++;
        }
        cout << "Length of "<< names[i] << " : " << len << endl;
    }
    return 0;
}