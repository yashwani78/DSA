#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a>b){
        a=a+b;
        b=a-b;
        a=a-b;
    }
    int gcd=1,i=1;
    while(i<=a){                //or while(i<b)
        if(a%i==0 && b%i==0){
            gcd=i;
        }
        i++;
    }
    cout<<gcd<<endl;
    return 0;
}