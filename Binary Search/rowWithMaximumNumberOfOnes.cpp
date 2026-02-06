//Row with Maximum number of Ones.

#include<bits/stdc++.h>
using namespace std;

int search(vector<vector<int>> &arr,int x,int y) {
    int row = 0;
    int col = y - 1;
    int ansRow = -1;

    while(row < x && col >= 0) {
        if (arr[row][col] == 1){
            ansRow = row;
            col--;
        } else {
            row++;
        }   
    }

    return ansRow;

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

    int ans = search(arr,x,y);

    cout << ans;
 
    return 0;
}