//Search in 2-D Marix.

#include<bits/stdc++.h>
using namespace std;

bool search(vector<vector<int>> &arr,int x,int y,int target) {
    // int row = 0;
    // int col = y - 1;

    // while(row < x && col >= 0) {
    //     if (arr[row][col] == target){
    //         return true;
    //     } else if(target < arr[row][col]) {
    //         col--;
    //     } else {
    //         row++;
    //     }
    // }

    // return false;

    int low = 0;
    int high = x * y - 1;

    while (low <= high){
        int mid = low + (high - low) / 2;

        if(arr[mid/ y][mid%y] == target) {
            return true;
        } else if(arr[mid/ y][mid%y] < target) {
            low = mid + 1;
        } else {
            high = mid -1;
        }

    }
    
    return false;

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

    int target;
    cout << "Enter the Target: ";
    cin >> target;

    bool ans = search(arr,x,y,target);

    cout << ans;
 
    return 0;
}