#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
/*  Consumed so much time to find this concept. This brings
    down the time complexity to O(n^2). Method by Vivek sir may be different
    from this. Update : Vivik sir's method is also same as this one.*/
    int TSum = 0;
    for (int i = 0; i < n; i++){
    // Before entering the inner loop sum should be set to zero in order to
    // calculate fresh sum every time and then add it to the add it to TSum.
       int sum = 0; 
       for (int j = i; j < n; j++){
        sum += arr[j];
        TSum += sum; 
       }
    }
    cout << TSum << endl;
    return 0;
}