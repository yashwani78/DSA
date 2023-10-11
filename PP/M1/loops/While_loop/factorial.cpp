#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int factorial=1;
    while(n>=1){
        factorial=factorial*n;
        n--;
    }
    cout<<factorial<<endl;
    return 0;
}