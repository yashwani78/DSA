#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    double sum=0,x=1.0;
    for(int i = 1; i <= n; i++){
        sum+=x/i;
    }
    cout<<sum<<"\n";
    return 0;
}