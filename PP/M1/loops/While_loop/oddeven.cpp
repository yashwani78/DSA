#include <iostream>
using namespace std;
int main()
{
    int n, c = 1, i = 2;
    cout << "Enter N: ";
    cin >> n;
    cout << "Even: ";
    while (c <= n)
    {
        cout << i << " ";
        i += 2;
        c++;
    }

    cout << endl;
    c = 1,
    i = 1;

    cout << "Odd : ";
    while (c <= n)
    {
        cout << i << " ";
        i += 2;
        c++;
    }
    cout << endl;
    return 0;
}