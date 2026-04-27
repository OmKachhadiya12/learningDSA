// Subset 1

#include<bits/stdc++.h>;
using namespace std;

void solve(int i,vector<int> &arr,vector<int> &temp,vector<vector<int>> &ans) {


    if(i >= arr.size()) {
        ans.push_back(temp);
        return;
    }

    temp.push_back(arr[i]);
    solve(i+1,arr,temp,ans);
    temp.pop_back();

    solve(i+1,arr,temp,ans);

}

vector<vector<int>> subsets(vector<int> &arr) {

    vector<vector<int>> ans;
    vector<int> temp;

    solve(0,arr,temp,ans);

    return ans;

}

int main() {
    return 0;
}