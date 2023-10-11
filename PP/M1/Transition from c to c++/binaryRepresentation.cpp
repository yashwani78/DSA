#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        vector<int> vec;
        while(n!=0) {
            vec.insert(vec.begin(), n%2); //Inserts at the begining of the vector.
            n/=2;
        }
        for (int i = 0; i < vec.size(); i++) {
            cout << vec[i] <<" ";
        }
        cout << endl;
        
    }
    return 0;
}