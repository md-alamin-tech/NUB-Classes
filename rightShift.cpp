#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int n = arr.size();
    int k = 3;

    // for (int i = 0; i < n - k; i++){
    //     arr[i] = 0;
    // }
    for(int i = n - 1; i > 0; i--){
        arr[i] = arr[i - 1];
       
    }
    for (int i = 0; i <= 2;i++){
        arr[i] = 0;
    }
        for (int i = 0; i < n; i++)
        {
        cout << arr[i] << " ";
    }
}