#include <iostream>
using namespace std;

int findMax(int arr[], int start, int end)
{
    if (start == end)
        return arr[start];
    int mid = (start + end) / 2;

    int x = findMax(arr, start, mid);
    int y = findMax(arr, mid + 1, end);

    return max(x, y);
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x = findMax(arr, 0, n - 1);
    cout << x << endl;

    return 0;
}