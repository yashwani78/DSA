// Fibonacci sequence => (f0, f1, f2, f3, f4, f5, f6, f7.....)
//  ( 0,  1,  1,  2,  3,  5,  8,  13.....)
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int prev = 0, curr = 1;
    cout << 0 <<" ";
    for (int i = 2; i <= n; i++)
    {
        int temp = prev + curr;
        prev = curr;
        curr = temp;
        cout << curr << " ";
    }
    cout << endl;

    return 0;
}