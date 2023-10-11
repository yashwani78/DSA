#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        if (a[i] >= 0){
            int ind = a[i], val = i;
            while(ind != i){
                int tmp = a[ind];
                a[ind] = -(val+1);
                val = ind;
                ind = tmp;
            }
        a[ind] = -(val+1);
        }
    }
    for (int i = 0; i < n; i++){
        a[i] = -1*a[i]-1;
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}