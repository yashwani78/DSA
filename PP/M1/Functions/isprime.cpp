#include <iostream>
using namespace std;
int isPrime (int x){
  	int c = 0;
    	for (int i = 1; i <= x; i++){
        if (x % i == 0){
            c++;
        }
    }
    if (c == 2)
    return 1;
    else 
    return 0;
}
int main(){
    int a;
    cin >> a;
    int c = 0;
    for (int i = 1; i <= a; i++){
        int ans = isPrime(i);
        if (ans == 1){
            cout << i << " ";
            c++;
        }
    }
    cout << endl << "No. of primes : " << c << endl;

    /** to find the primes from amongst the numbers provided by the user, 
     first we will have to store them in an array.**/
    
    int n;
    cin >> n ;
    int arr[n];
    cout << "Enter the numbers : ";
    for (int i = 0 ; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0 ; i < n; i++){
        int ans = isPrime(arr[i]);
        if (ans == 1){
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}