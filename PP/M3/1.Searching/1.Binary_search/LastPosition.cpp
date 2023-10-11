#include <iostream>
using namespace std;

long long get_lastIndex(long long arr[], long long low, long long high, long long key){
    int n = high + 1;
    while (low <= high){
        long long mid = (low+high) / 2;

        if (arr[mid] < key)
            low = mid + 1;
        else if (arr[mid] > key)
            high = mid - 1;
        else{
            if(mid == n-1)
                return (mid + 1);
            else if(arr[mid+1] != key)
                return (mid + 1);
            else
                low = (mid + 1);
        }
    }
    return -1;
}

int main(){
    long long n;
    cin >> n;
    long long arr[n];
    for (long long i = 0 ; i < n; i++){
        cin >> arr[i];
    }

    long long target;
    cin >> target;

    long long lastIndex = get_lastIndex(arr, 0, n-1, target);
    cout << lastIndex << endl;

    return 0;
}