#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    for (int i = n - 1; i > 0; i--){
        arr[i] = arr[i -k];
        
    }
    
    for (int i = 0; i < k;i++){
        arr[i] = 0;
    }

    for (int i = 0; i < n; i++){
        cout << arr[i];
    }
}