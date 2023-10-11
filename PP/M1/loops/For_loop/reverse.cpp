#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int reverse=0;
    for(int i = 1; n>0; i++){
        int temp=n%10;
        reverse=reverse*10+temp;
        n/=10;
    }
    cout<<reverse<<endl;

    return 0;
}