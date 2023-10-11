#include <iostream>
using namespace std;

long long get_firstIndex(long long arr[], long long low, long long high, long long key) {
while (low <= high){
        long long mid = (low+high) / 2;

        if (arr[mid] < key)
            low = mid + 1;
        else if (arr[mid] > key)
            high = mid - 1;
        else{
            if(mid == 0)
                return (mid + 1);
            else if(arr[mid-1] != key)
                return (mid + 1);
            /*Both of the above if and else if conditions can be merged as :
            [if(mid == 0 || arr[mid - 1] != key)
                return (mid + 1);       ]*/
            else
                high = (mid - 1);
         }
    }
    return -1;
}

int main() {
    long long n;
    cin >> n;
    long long arr[n];
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long target;
    cin >> target;

    long long firstIndex = get_firstIndex(arr, 0, n - 1, target);
    cout << firstIndex << endl;

    return 0;
}
