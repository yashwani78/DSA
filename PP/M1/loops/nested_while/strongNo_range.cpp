// Find ways to reduce time complexity and also to reduce the variables

#include <iostream>
using namespace std;

int main() {
 long long int n,m, digit, factorial;
 cout<<"Enter range:"<<endl;
 cin>>m;
 while(m>0){
    long long int originaln=m;
    int sum=0;
    n=m;
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
        cout<<originaln<<" ";
    }
    m--;
 }
cout<<endl;
 return 0;
}