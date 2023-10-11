#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct triplet{
    int val;
    int f;
    int idx;
};

bool cmp (triplet t1, triplet t2){
    if(t1.f != t2.f){
        return t1.f > t2.f;
    }
    return t1.val < t2.val;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> num(n);
        for (int i = 0; i < n; i++){
            cin >> num[i];
        }
        vector<int> freq(n+1,0);
        for(int i = 0; i < n; i++){
            freq[num[i]]++;
        }

        vector<triplet> v;
        for (int i = 0; i < n; i++){
            triplet t;
            t.val = num[i];
            t.f = freq[num[i]];
            t.idx = i;
            v.push_back(t);
        }
        sort(v.begin(), v.end(), cmp);

        for (int i = 0;i < v.size(); i++){
            cout << v[i].val << " ";
        }
        
        cout << endl;
    }
}