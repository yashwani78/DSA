#include <iostream>
using namespace std;

// Problem link : https://www.hackerrank.com/challenges/recursive-digit-sum/problem

string digitToString(long long n) {
    int l;
    string str;
    while(n > 0) {
        l = n%10;           // lastDigit.
        str += l + '0';     // concatenating lastDigit to string.
        n /= 10;
    }
    // reversing the string because string formed via above operation is reversed form of the number.
    int f = 0;              // first index
    l = str.length() - 1;   // last index
    while(f <= l) {
        char tmp = str[f];
        str[f] = str[l];
        str[l] = tmp;
        f++, l--;
    }
    return str;
}

int superDig(string str) {
    if(str.length() == 1){ // only one digit in the string means that the superdigit has been found.
        return str[0]-'0';
    }
    long long sum = 0;
    for(int i = 0; i < str.length(); i++) {  // finding sum of each digit of the string.
        sum += str[i] - '0';
    }
    return superDig(digitToString(sum));     // convert integer sum to digit and call recursive.
}

int main() {
    string  n; 
    int k;
    cin >> n >> k;
    // string newStr;
    long long sum = 0;
    for(int i = 0; i < n.length(); i++) {
        sum += n[i] - '0';
    }
    int super = superDig(digitToString(sum*k));
    cout << super << endl;
    return 0;
}