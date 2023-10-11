/*Program to sort an array of structs according to the age.*/

#include <iostream>
using namespace std;

typedef struct person{
    char name[50];
    int age;
    char gender;
}per;

int main(){
    int n;
    cin >> n;
    per persons[n];
    for (int i = 0; i < n; i++){
        cin >> persons[i].name >> persons[i].age >> persons[i].gender;
    }
    for (int i = 1; i < n; i++){
        int j = i;
        while( j > 0 && persons[j].age < persons[j-1].age){
            per tmp = persons[j];
            persons[j] = persons[j-1];
            persons[j-1] = tmp;
            j--;
        }
    }
    cout << "************" << endl;

    for (int i = 0; i < n; i++){
        cout << persons[i].name << " " << persons[i].age <<" " << persons[i].gender << endl;
    }
    
    cout << endl;
    return 0;
}