#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    float x,y;
	cin>>x>>y;
	if (y==0){
		cout<<fixed<<setprecision(2)<<0.00<<endl;
	}
	else if (fmod(x,5)==0 && y>=x+0.5){
		y=y-x-0.50;
		cout<<fixed<<setprecision(2)<<y<<endl;
	}
	else{
		cout<<fixed<<setprecision(2)<<y<<endl;
	}
    return 0;
}