#include<iostream>
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
    int n,m;
    cin>>m;
    n=m;
    int c=0;
    while(n>0){
        n/=10;
        if(n>1)
            c++;
    }
    // cout<<"c is: "<<c<<endl;
    while(c>=0){
        n=m;
        int p=power(10,c);
        n=n/p;
        cout<<n<<endl;
        c--;
    }
    return 0;
}