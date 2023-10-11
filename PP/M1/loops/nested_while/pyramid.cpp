#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int i = 1, j;
    while (i <= n)
    {
        int j = n - i;
        while (j >= 1)
        {
            cout << " ";
            j--;
        }
        j = 1;
        while (j <= i)
        {
            cout << "* ";
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}