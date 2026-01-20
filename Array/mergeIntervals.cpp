//Merging the Intervals.

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> mergedIntrvals(vector<vector<int>> &arr,int n) {   
    // sort(arr.begin(),arr.end()); 

    // vector<vector<int>> ans;

    // for (int i=0;i<n;i++){
    //     int start = arr[i][0];
    //     int end = arr[i][1];
    //     if(!ans.empty() && end <= ans.back()[1]) {
    //         continue;
    //     }
    //     for (int j=i+1;j<n;j++){
    //         if(arr[j][0] <= end) {
    //             end = max(end,arr[j][1]);
    //         } else {
    //             break;
    //         }
    //     }
    //     ans.push_back({start,end});
    // }
    
    // return ans;

    vector<vector<int>> ans;
    ans.push_back(arr[0]);

    for (int i=1;i<n;i++){
        if(arr[i][0] <= ans.back()[1]) {
            ans.back()[1] = max(ans.back()[1],arr[i][1]);
        } else {
            ans.push_back(arr[i]);
        }
    }
    
    return ans;

}

int main() {

    int n;
    cout << "Enter the Number of pair: ";
    cin >> n;

    vector<vector<int>> arr(n,vector<int>{2});
    for (int i=0;i<n;i++){
        for (int j=0;j<2;j++){
            cin >> arr[i][j];
        } 
    }

    

    return 0;
}