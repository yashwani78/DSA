#include<iostream>
#include<climits>
using namespace std;

int main(){
long long x = (int)1000000000;
long long y = (int)1000000000;
long long z=x*y;
long long a=LONG_LONG_MAX;
long long b=LONG_LONG_MIN;
cout<<a*b<<endl;
cout<<endl<<a<<endl<<b<<endl<<endl;
cout<<x<<endl;
cout<<z<<endl;
cout<<sizeof(z)<<endl;
    return 0;
}