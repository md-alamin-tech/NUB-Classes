#include<iostream>
#include<vector>
using namespace std;

void rotateLeft(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n; 

    vector<int> temp;

    
    for (int i = 0; i < k; i++) {
        temp.push_back(arr[i]);
    }

   
    for (int i = 0; i < n - k; i++) {
        arr[i] = arr[i + k];
    }

    
    for (int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50, 60};
    int k = 2;
    
    rotateLeft(arr, k);
    
    cout << "After Left Rotation: ";
    for (int val : arr) cout << val << " ";
    cout << endl;
}
