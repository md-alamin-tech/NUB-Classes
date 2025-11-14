#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int temp[k];

    for (int i = 0; i < k;i++){
        temp[i] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i + k];
    }

    for (int i = k; i < n; i++){
        arr[i] = temp[0]++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
