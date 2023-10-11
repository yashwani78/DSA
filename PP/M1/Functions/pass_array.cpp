#include <iostream>
using namespace std;
void print_arr(int arr[],int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int* newarr(int arr[],int size){
    for (int i = 0; i < size; i++){
        arr[i] *= -1;
    }
    return arr;
}
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    newarr(&arr[0],5);
    print_arr(&arr[0],5);
    return 0;
}