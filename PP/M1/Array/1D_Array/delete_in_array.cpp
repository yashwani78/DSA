#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;     // n= length of array.
    int arr[n];
    for(int i = 0; i < n; i++)
        cin>>arr[i];
    
    int k;      // k= index at which element is to be deleted.
    cin>>k;
    for(int i=k+1; i < n; i++)
        arr[i-1] = arr[i];

    for(int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    
    cout<<endl;

    return 0;
}