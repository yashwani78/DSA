#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool compareNumbers(const string& a, const string& b) {
    return a + b > b + a; // Compare numbers as strings to form the largest number
}

string largestNumber(vector<int>& nums) {
    vector<string> numStrings;
    for (int num : nums) {
        numStrings.push_back(to_string(num));
    }
    cout << "beforeSorting" ;
    cout << endl;
    for (int i = 0; i < numStrings.size(); i++){
        cout << numStrings[i] << " ";
    }
    cout << endl;
    sort(numStrings.begin(), numStrings.end(), compareNumbers);
    cout << "afterSorting";
    cout << endl;
    for (int i = 0; i < numStrings.size(); i++){
        cout << numStrings[i] << " ";
    }
    cout << endl;
    if (numStrings[0] == "0") {
        return "0"; // All numbers are 0
    }
    
    string largestNum;
    for (string numString : numStrings) {
        largestNum += numString;
    }
    
    return largestNum;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        
        string result = largestNumber(nums);
        cout << result << endl;
    }
    
    return 0;
}
