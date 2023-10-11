#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter the numbers : ";
    cin>>x>>y>>z;

    if (x>=y && x>=z){
        cout<<x<<" is maximum."<<endl;
        if(y>=z){
            cout<<y<<" is second maximum."<<endl;
        }
        else{
            cout<<z<<" is second maximum."<<endl;
        }
    }
   else if (y>=x && y>=z){
        cout<<y<<" is maximum."<<endl;
        if(x>=z){
            cout<<x<<" is second maximum."<<endl;
        }
        else{
            cout<<z<<" is second maximum."<<endl;
        }
    }
   else{
        cout<<z<<" is maximum."<<endl;
        if(y>=x){
            cout<<y<<" is second maximum."<<endl;
        }
        else{
            cout<<x<<" is second maximum."<<endl;
        }
    }
 

    return 0;
}