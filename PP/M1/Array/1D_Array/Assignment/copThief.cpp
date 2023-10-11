// this solution was uploaded in the discussion section by some student

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int m, x, y;
    cin >> m >> x >> y;
    int cops[m];
    for (int i = 0; i < m; i++)
    {
        cin >> cops[i];
    }
    bool ispresent[100] = {0};
    for (int j = 0; j < m; j++)
    {
        for (int i = cops[j]; i <= (cops[j] + x * y) && i <= 100; i++)
        {
            ispresent[i - 1] = 1;
        }
        for (int i = cops[j]; i >= (cops[j] - x * y) && i > 0; i--)
        {
            ispresent[i - 1] = 1;
        }
    }
    int ans = 0;
    for (int i = 0; i < 100; i++)
    {
        if (ispresent[i] == false)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}