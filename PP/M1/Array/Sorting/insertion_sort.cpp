/*Insertion sort: Idea ==> insert a new element at its deserving index in an already sorted array.*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++){    // j=i because when loop run for i-1, the array was already sorted and we 
        int j = i;                  //  do not need to check the array for the previous indices again.
        while(arr[j] < arr[j-1] && j > 0 ){  //Have to ensure that the value of j does not become 0 , so add the
            int tmp = arr[j];                //condition 'j > 0' inside the while loop */
            arr[j] = arr[j-1];
            arr[j-1] = tmp;
            j--;
        }
    }
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}