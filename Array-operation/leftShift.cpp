#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int n = arr.size();
    int k = 3;

    for (int i = 0; i < n; i++){
        arr[i] = arr[i + k];
    }

    for (int i = n-k; i < n; i++){
        arr[i] = 0;
    }

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}