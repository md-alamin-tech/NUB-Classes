#include<iostream>
using namespace std;

int rightShift(int arr[], int sz){
    int sft = 3;
    for (int i = i + sft; i < sz; i++){
        arr[i];
    }
    for (int i = 0; i < sft; i++){
        arr[i] = 0;
    }
    cout << "After right shift Array :" << endl;
    for (int i = 0; i < sz; i++){
        cout << arr[i] << " " ;
    }

    cout << endl;
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int sz = sizeof(arr) / sizeof(arr[0]);

    rightShift(arr, sz);

    return 0;
}