// (1+11+111+1111+11111+111111+.....)
// find sum upto n terms.
#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long num=0, sum=0;
    for ( int i = 1; i <= n; i++ ){
        num = (num*10)+1;
        cout<<num<<" ";
        sum+=num;
    }
    cout << endl;
    cout << sum << endl;
    return 0;
}