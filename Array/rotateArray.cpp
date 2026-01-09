//Rotate array by 90degree.

#include<bits/stdc++.h>
using namespace std;

void rotateArray(vector<vector<int>> &arr,int x) {
    for (int i=0;i<x;i++){
        for (int j=i+1;j<x;j++){
            if(i != j) {
                swap(arr[i][j],arr[j][i]);
            }
        } 
    }

    for (int i=0;i<x;i++){
        reverse(arr[i].begin(),arr[i].end());
    }
    
    return;
    
}

int main() {

    int x;
    cout << "Enter the Rows or Columns: ";
    cin >> x;

    vector<vector<int>> arr(x,vector<int>(x));

    for (int i=0;i<x;i++){
        for (int j=0;j<x;j++){
            cin >> arr[i][j];
        }
        cout << endl;
    }

    rotateArray(arr,x);

    for (int i=0;i<x;i++){
        for (int j=0;j<x;j++){
            cout << arr[i][j];
        }
        cout << endl;
    }    

 
    return 0;
}