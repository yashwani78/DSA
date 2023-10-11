#include <iostream>
using namespace std;

typedef struct person{
    char name[50];
    int age;
    char gender;

}per;
int main(){
    per p = { "Shyam", 50, 'M'};
    cout << p.name << " " << p.age << " " << p.gender<< " "  << endl;

    /*  can we create an array of persons? Ofcourse yes.
        We can create an array of any data type.
        we are going to do that. */
    
    int n;
    cin >> n;
    per persons[n];
    for (int i = 0; i < n; i++){
        cin >> persons[i].name >> persons[i].age >> persons[i].gender;
    }
    for (int i = 0; i < n; i++){
        cout << persons[i].name << " " << persons[i].age << " "  << persons[i].gender << endl;
    }
    cout << "**********\n";

    //Below is the code to find the 'name' of the person whose 'age' is max.
    int maxage = -1, idx;
    for (int i = 0; i < n; i++){
        if(persons[i].age >= maxage){
            maxage = persons[i].age;
            idx = i;
        }
    }
    cout << persons[idx].name << " " << persons[idx].age << " " << maxage<< endl;
    return 0;
}