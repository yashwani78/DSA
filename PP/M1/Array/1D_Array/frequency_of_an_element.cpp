#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int key,count=0;
    cin>>key;
    for(int i = 0; i < n; i++){
        if(arr[i]==key){
            count++;
        }
    }
    cout<<"Frequency : "<<count<<endl;
    return 0;
}