#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int i=1,c=0;
    while(i<=n){
        if(n%i==0){
            cout<<i<<" ";
            c++;
        }
        i++;
    }
    cout<<endl<<"Numbers of factors : "<<c<<endl;
    return 0;
}