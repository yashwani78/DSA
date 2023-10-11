#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 70)
    {
        cout << "Student's grade is A" << endl;
    }
    else if (70 > marks && marks > 40)
    {
        cout << "Student's grade is B" << endl;
    }
    else
    {
        cout << "Student's grade is C" << endl;
    }

    return 0;
}