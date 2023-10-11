#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    double bill;
    for (int i = 0; i <= n; i++){
        if(i == 0){
            bill=0;
        }
        else if(i <= 50){
			bill += 0.50;
		}
		else if(i > 50 && i <= 150){
			bill += 0.75;
		}
        else if(i > 150 && i <= 250){
            bill += 1.20;
        }
        else if(i > 250){
            bill += 1.50;
        }
    }
    bill *= 1.2;
    cout<<fixed<<setprecision(2)<<bill<<endl;
    return 0;
}