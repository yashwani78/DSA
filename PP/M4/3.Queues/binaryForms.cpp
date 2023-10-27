/**
 * Given -> int n (n > 0). Print the binary representation of all the numbers from 1 to n.
*/

#include<bits/stdc++.h>
using namespace std;

// using level order traversal

int main() {
    int n;
    cin >> n;
    queue<string> q;
	q.push("1");
	int c = 1;

	vector<string>ans;

	while(c < n) {
	    string x = q.front();
	    // c++;
	    q.pop();
	    ans.push_back(x);
	    
	    if(c<n) {
            q.push(x + "0");
            c++;
        }
        if(c<n){
            q.push(x + "1");
            c++;
        }
	}

    while(!q.empty()) {
        ans.push_back(q.front());
        q.pop();
    }
    for(string val : ans) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}