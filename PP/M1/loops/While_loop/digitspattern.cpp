#include<iostream>
#include<cmath>
using namespace std;

int power(int base,int exponent){
    int ans=1;
    while(exponent>0){
        ans=ans*base;
        exponent--;
    }
    return ans;
}

int main(){
    int n,m,c=0;
    cin>>m;
    n=m;
    while(n>0){
        cout<<n<<endl;
        c++;
        n/=10;
    }
    cout<<"No of digits: "<<c<<endl;
    while(c>=0){
        n=m;
        int p = power(10,c);
        n=n/p;
        cout<<n<<endl;
        c--;
    }
    return 0;
}