#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int k = 1000000;
    vector<int> primes(k+1,1);
    primes[1] = 0;  
    for (int i = 2; i * i <= k; i++)
    {
        if (primes[i] == 1)
        {
            for (int j = i; i * j <= k; j++)
            {
                primes[i * j] = 0;
            }
        }
    }

    int m;
    cin >> m;
    vector<long long> arr(m);
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++)
    {
        long long v = sqrt(arr[i]);
        if (primes[v] == 1 && v*v == arr[i]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    // cout << cnt << endl;

    return 0;
}