//Median of Row wise sorted matrix.

#include<bits/stdc++.h>
using namespace std;

int checking(vector<vector<int>> arr,int x,int y,int mid) {
    int count = 0;
    for (int i=0;i<x;i++){
        auto it = upper_bound(arr[i].begin(), arr[i].end(), mid);
        count += it - arr[i].begin();
    }
    
    return count;
}

int search(vector<vector<int>> arr,int x,int y) {
    int low = INT_MAX;
    int high = INT_MIN;
    for (int i=0;i<x;i++){
        low = min(low,arr[i][0]);
        high = max(high,arr[i][y-1]);
    }

    int req = (x * y) / 2;
    while (low <= high){
        int mid = low + (high - low) / 2;

        int check = checking(arr,x,y,mid);

        if (check <= req){ 
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return low;
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