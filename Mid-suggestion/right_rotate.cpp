#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int temp[k];

    for (int i = 0; i < k; i++){
        temp[i] = arr[i + k];
    }
    for (int i = 0; i > 0; i--){
        arr[k] = arr[n - 1- i];
    }

    for (int i = 0; i > k; i++){
        arr[i] = temp[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}