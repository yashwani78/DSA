#include <iostream>
using namespace std;
int main() {
	int a,b,years=0;
	cin>>a>>b;
  
		while(a<=b){
			years++;
			a*=3;
			b*=2;
		}
	cout<<years<<endl;
	return 0;
}