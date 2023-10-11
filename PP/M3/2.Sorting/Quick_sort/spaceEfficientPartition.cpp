#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &v, int low, int high){
    
}

void quickSort(vector<int> &v, int low, int high){
    if(low < high){
        int p = partition(v, low, high);
        quickSort(v,low,p-1);
        quickSort(v, p+1, high);
    }
    return;
}

int main(){
    vector<int> v = {2,5,323,4,6,43,22,34,5,78};
    quickSort(v,0,v.size()-1);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}