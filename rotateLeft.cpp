#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int n = arr.size();
    int st = n;
    
    for (int i = 0; i < n; i++){ 
        arr[n - 1] = arr[0];
    }
    arr[0] = st;

    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
} 