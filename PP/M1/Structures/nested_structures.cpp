#include <iostream>
using namespace std;
typedef struct Education{
    char degree[10];
    int gradyear;
    char college[50];
}Education;
typedef struct person{
    char name[50];
    int age;
    char gender;
    Education e;
}person;
int main(){
    int n;
    Education e = {"B.Tech", 2019 , "MIT"};
    person p = {"Ayush", 13, 'M', e};
    cout << p.name << " " << p.age << " " << p.gender << " " << endl;
    cout << p.e.degree << " " << p.e.gradyear << " " << p.e.college << endl;
    

    return 0;
}