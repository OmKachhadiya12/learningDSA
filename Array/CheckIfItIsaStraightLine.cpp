//Check If It Is a Straight Line.

#include <bits/stdc++.h>
using namespace std;

bool checkStraightLine(vector<vector<int>> arr,int n) {
    int x = arr[0][0];
    int y = arr[0][1];
    int x1 = arr[1][0];
    int y1 = arr[1][1];

    int dx = x1 - x;
    int dy = y1 - y;

    for (int i=2;i<n;i++){
        int xi = arr[i][0];
        int yi = arr[i][1];
        
        if (dy * (xi - x) != dx * (yi - y)) {
            return false;
        }
        
    }
    
    return true;
}


int main() {
    int n;
    cout << "Enter the Size of Cordinates: ";
    cin >> n;

    vector<vector<int>> arr(n,vector<int> {2});
    cout << "Enter the Cordinates: ";
    
    for (int i = 0; i < n; i++) {
        for (int j=0;j<2;j++){
            cin >> arr[i][j];
        }
        
    }

    cout << endl << checkStraightLine(arr, n); 
    
    return 0;
}
