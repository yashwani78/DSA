#include <iostream>
using namespace std;

int main() {
 int n, digit, factorial,sum=0;
 cin>>n;
 int originaln=n;
 if (n==0){
    cout<<"Not a strong number"<<endl;
 }
 else{
    while(n>0){
        digit=n%10;
        factorial=1;
        while(digit>0){
            factorial*=digit;
            digit--;
        }
        sum+=factorial;
        n/=10;
    }
    if(sum==originaln){
        cout<<"Strong number"<<endl;
    }
    else{
        cout<<"Not a strong number"<<endl;
    }
 }

 return 0;
}