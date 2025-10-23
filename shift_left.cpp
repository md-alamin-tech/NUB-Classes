#include<iostream>
using namespace std;

int leftShift(int arr[], int sz){
    int k = 2;
    for (int i = 0; i < sz-k; i++){
        arr[i] = arr[i + k];
    }
    for (int i = sz - k; i < sz; i++){
        arr[i] = 0;
    }

    cout << "After left shift the arr :" << endl;
    for (int i = 0; i < sz; i++){
        cout << arr[i] << " ";
    }
     cout << endl;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int sz = sizeof(arr) / sizeof(arr[0]);

    leftShift(arr, sz);
    return 0;
}