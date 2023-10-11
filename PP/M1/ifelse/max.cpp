#include<iostream>
using namespace std;

int main(){
int x,y,z,maximum;

cin>>x>>y>>z;


if(x>=y){
    if(x>=z){
        maximum = x;
        cout<<x<<" is maximum."<<endl;
    }
    else{
        maximum = z;
        cout<<z<<" is maximum."<<endl;
    }
}
else if(y>=x){
    if(y>=z){
        maximum = y;
        cout<<y<<" is maximum."<<endl;
    }
    else{
        maximum = z;
        cout<<z<<" is maximum."<<endl;
    }
}
int c = 0;
if(maximum==x)
c++;
if(maximum==y)
c++;
if(maximum==z)
c++;

cout<<"Number of maximum numbers: "<<c<<endl;

    return 0;
}