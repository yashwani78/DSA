#include <iostream>
using namespace std;
int main() {
	int p,d,m,s;
	cin>>p>>d>>m>>s;
	int count=0;
	
	if (s<p)
		return 0;
		
	count++;
	s-=p;
	p-=d;
	while(s>=m && s>=p){
		count++;
		s-=p;
		p-=d;
	}
	
	cout<<count<<endl;
	
    return 0;
}