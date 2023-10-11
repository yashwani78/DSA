#include <iostream>
using namespace std;
int main() {

	int a[3],b[3];
	int aliceScore=0, bobScore=0;
	
	for(int i=0; i<3; i++)
		cin>>a[i];
	
	for(int i=0; i<3; i++)
		cin>>b[i];
	
	for(int i=0; i<3; i++)
	{
		if(a[i]>b[i])
			aliceScore++;
		else if(b[i]>a[i])
			bobScore++;
	}
	
    cout<<aliceScore<<" "<<bobScore<<endl;
    return 0;
}