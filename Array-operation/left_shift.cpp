#include<iostream>
#include<vector>
using namespace std;

void shiftLeft(vector<int>& source, int k){
    int n = source.size();
    k = k % n; // handle if k > n

    vector<int> temp(n);

    for(int i = 0; i < n; i++){
        temp[i] = source[(i + k) % n];
    }

    source = temp;
}

int main(){
    vector<int> source = {10, 20, 30, 40, 50, 60};

    shiftLeft(source, 3);

    cout << "After shifting left by 3 positions: ";
    for(int val : source){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
