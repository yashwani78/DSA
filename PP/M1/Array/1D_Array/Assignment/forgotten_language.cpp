#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;

    vector<string> forgottenWords(n);
    for(int i = 0; i < n; i++) {
        cin >> forgottenWords[i];
    }

    vector<vector<string>> phrases(k);
    for(int i = 0; i < k; i++) {
        int l;
        cin >> l;
        vector<string> modernWords(l);
        for(int j = 0; j < l; j++) {
            cin >> modernWords[j];
        }
        phrases[i] = modernWords;
    }

    vector<string> ans(n);
    for(int i = 0; i < n; i++) {
        bool found = false;
        for(int j = 0; j < phrases.size(); j++) {
            for(int k = 0; k < phrases[j].size(); k++) {
                if(forgottenWords[i] == phrases[j][k]) {
                    ans[i] = "YES";
                    found = true;
                }
                if(found == true) break;
            }
        }
        if(found == false) ans[i] = "NO";
    }
    
    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    
    cout << endl;
    
    return 0;
}