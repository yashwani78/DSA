#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
        for(int i=0,j=n-1; i<=j; i++,j--){
        int temp=arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    /*  *(This is my approach)*

            int temp[n-1];
            for(int i=0; i<n; i++){
                temp[i]=arr[n-1-i];
            }
            for(int i=0; i<n; i++){
                arr[i]=temp[i];
                cout<<arr[i]<<" ";
            }  */

    cout<<endl;
    
    return 0;
}