#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int c=1;
    while(c<=n){
        if(c==n){
            cout<<c++;
        }
        else
        cout<<c++<<" ";
        // c++;
    }
    cout<<endl;
    return 0;
}