#include <iostream>
using namespace std;
int main()
{
    double x, i, n;
    double fact = 1, pow = 1, sum = 1;
    cin >> n >> x;

    for (i = 1; i <= n; i++)
    {
        
        fact *= i;
        pow *= x;
        sum += (pow / fact);
    
    }
    cout << sum << endl;
    return 0;
}