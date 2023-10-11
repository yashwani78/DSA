#include<iostream>
using namespace std;

int main(){
    int dividend,divisor,rem,quo;
    cout<<"Dividend : ";
    cin>>dividend;
    // cout<<endl;
    cout<<"Divisor : ";
    cin>>divisor;

    quo=dividend/divisor;

    rem=dividend-(divisor*quo);

    cout<<"Remainder : "<<rem<<endl;



    return 0;
}