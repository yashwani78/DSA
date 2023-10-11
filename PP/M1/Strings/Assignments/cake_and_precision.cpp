#include <iostream>
#include <string>
using namespace std;
/*This is basically a program to add '1' to a number stored in a string. The number may be 
greater than that can be stored by long long int.*/

string addOne(string num) {
    int n = num.size();
    int carry = 1; // start with carry=1 to add 1 to the least significant digit
    for (int i = n-1; i >= 0; i--) {
        int digit = num[i] - '0'; // convert the character to an integer
        int sum = digit + carry;
        if (sum >= 10) {
            carry = 1;
            num[i] = sum % 10 + '0'; // convert the integer to a character
        }
        else {
            carry = 0;
            num[i] = sum + '0'; // convert the integer to a character
            break; // we don't need to carry anymore, so we can stop
        }
    }
    if (carry == 1) {
        num.insert(0, "1"); // add one more digit to the left
    }
    return num;
}

int main() {
	int T;
	cin >> T;
	while(T>0){
		string num;
		cin >> num;
		num = addOne(num);
		cout << num << endl;
		T--;
	}
    return 0;
}
