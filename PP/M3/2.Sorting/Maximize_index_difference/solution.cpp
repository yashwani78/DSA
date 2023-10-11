#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int,int> x,pair<int,int> y){
    if(x.first != y.first){
        return x.first < y.first;
    }
    return x.second < y.second;
}

int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<pair<int,int>> point(n); //Storing values along with their indices in the vector of pairs.
    for (int i = 0; i < n; i++){
        point[i] = {arr[i],i};
    }
    sort(point.begin(), point.end(), cmp);

    

    delete[] arr;
    return 0;
}