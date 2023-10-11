// sorting by insertion sort
#include <iostream>
using namespace std;
int main(){
    char name[100];
    cin >> name;
    cout << name << endl;
    cout << "sorted : " << endl;
    for (int i = 1 ; name[i] != '\0'; i++){
        int j = i;
        while (name[j] < name[j-1] && j > 0){
            char tmp = name[j];
            name[j] = name[j-1];
            name[j-1] = tmp;
            j--;
        }
    }
    cout << name << endl;
    return 0;
}