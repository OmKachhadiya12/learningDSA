//Find the Peak Element 2.

#include<bits/stdc++.h>
using namespace std;

int maxElement(vector<vector<int>>& arr, int col) {
    int n = arr.size();
    int max_val = INT_MIN;
    int index = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i][col] > max_val) {
            max_val = arr[i][col];
            index = i;
        }
    }
    return index;
}
  
vector<int> search(vector<vector<int>>& arr) {
    int n = arr.size();     
    int m = arr[0].size();  
  
    int low = 0;           
    int high = m - 1;      
  
    while (low <= high) {
        int mid = (low + high) / 2;

        int row = maxElement(arr, mid);

        int left = mid - 1 >= 0 ? arr[row][mid - 1] : INT_MIN;
        int right = mid + 1 < m ? arr[row][mid + 1] : INT_MIN;
  
        if (arr[row][mid] > left && arr[row][mid] > right) {
            return {row, mid};
        } else if (left > arr[row][mid]) {
                high = mid - 1;
        } else {
            low = mid + 1;
        }
        }
  
        return {-1, -1};
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

    vector<int> ans = search(arr);

    for(auto it : ans) {
        cout << it << " ";
    }
 
    return 0;
}