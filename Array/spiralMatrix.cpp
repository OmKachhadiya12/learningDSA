//Spiral matrix

#include<bits/stdc++.h>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>> &arr,int x,int y) {
    vector<int> temp;

    int left = 0,right = y - 1;
    int top = 0,bottom = x - 1;

    while (left <= right && top <= bottom){
        for (int i=left;i<=right;i++){
            temp.push_back(arr[top][i]);
        }
        top++;
        for (int i=top;i<=bottom;i++){
            temp.push_back(arr[i][right]);
        }
        right--;
       if (top <= bottom){
        for (int i=right;i>=left;i--){
            temp.push_back(arr[bottom][i]);
        }
        bottom--;
       }
       if (left <= right){
        for (int i=bottom;i>=top;i--){
            temp.push_back(arr[i][left]);
        }
        left++;
       }
    }

    return temp;;
}

int main() {

    int x,y;
    cout << "Enter the Rows and Columns: ";
    cin >> x >> y;

    vector<vector<int>> arr(x,vector<int>(y));

    for (int i=0;i<x;i++){
        for (int j=0;j<y;j++){
            cin >> arr[i][j];
        }
        cout << endl;
    }

    vector<int> spiral = spiralMatrix(arr,x,y);
 
    return 0;
}