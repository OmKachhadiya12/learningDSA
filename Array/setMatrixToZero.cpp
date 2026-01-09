//Set Matix to Zero's.

#include<bits/stdc++.h>
using namespace std;

void setMatrixToZero(vector<vector<int>> &arr,int x,int y) {
        // int r = arr.size();
        // int c = arr[0].size();

        // vector<int> row(r, 0);
        // vector<int> column(c, 0);

        // for (int i = 0; i < r; i++) {
        //     for (int j = 0; j < c; j++) {
        //         if (arr[i][j] == 0) {
        //             row[i] = 1;
        //             column[j] = 1;
        //         }
        //     }
        // }

        // for (int i = 0; i < r; i++) {
        //     for (int j = 0; j < c; j++) {
        //         if (row[i] == 1 || column[j] == 1) {
        //             arr[i][j] = 0;
        //         }
        //     }
        // }

        // return;

    bool firstRow = false;
    bool firstColumn = false;

    for (int i=0;i<y;i++){
        if(arr[0][i] == 0) {
            firstRow = true;
            break;
        }
    }
    

    for (int i=0;i<x;i++){
        if(arr[i][0] == 0) {
            firstColumn = true;
            break;
        }
    }
     
    for (int i=1;i<x;i++){
        for (int j=1;j<y;j++){
            if(arr[i][j] == 0) {
                arr[0][j] = 0;
                arr[i][0] = 0;
            }
        }
        
    }
    
    for (int i=1;i<x;i++){
        for (int j=1;j<y;j++){
            if(arr[i][0] == 0 || arr[0][j] == 0) {
                arr[i][j] = 0;
            } 
        }
        
    }

    if(firstRow) {
        for (int i=0;i<y;i++){
            arr[0][i] = 0;
        }
    }
    
    if(firstColumn) {
        for (int i=0;i<x;i++){
            arr[i][0] = 0;
        }
    }

    return;

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

    setMatrixToZero(arr,x,y);

    for (int i=0;i<x;i++){
        for (int j=0;j<y;j++){
            cout << arr[i][j];
        }
        cout << endl;
    }    

 
    return 0;
}