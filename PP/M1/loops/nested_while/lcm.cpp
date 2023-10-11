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
    int i=1;
    while(i<=a*b){
        if(i%a==0 && i%b==0){
            break;
        }
        i++;
    }
    cout<<i<<endl;
    return 0;
}